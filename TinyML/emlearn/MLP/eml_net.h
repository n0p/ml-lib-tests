#include "eml_common.h"

//#include <stdint.h>
#include <math.h>


// TODO: implement elu
// TODO: implement SeLu for SNN
// TODO: implement HardSigmoid
typedef enum _EmlNetActivationFunction {
    EmlNetActivationIdentity = 0,
    EmlNetActivationRelu,
    EmlNetActivationLogistic,
    EmlNetActivationSoftmax,
    EmlNetActivationTanh,
    EmlNetActivationFunctions,
} EmlNetActivationFunction;

static const char *
eml_net_activation_function_strs[EmlNetActivationFunctions] = {
    "identity",
    "relu",
    "logistic",
    "softmax",
    "tanh",
};

typedef struct _EmlNetLayer {
    int32_t n_outputs;
    int32_t n_inputs;
    const float *weights;
    const float *biases;
    EmlNetActivationFunction activation;
} EmlNetLayer;

typedef struct _EmlNet {
    // Layers of the neural network
    int32_t n_layers;
    const EmlNetLayer *layers;
    // Buffers for storing activations
    float *activations1;
    float *activations2;
    int32_t activations_length;
} EmlNet;


static float
eml_net_relu(float in) {
    return (in <= 0.0f) ? 0.0f : in; 
}

static float
eml_net_expit(float in) {
    return 1.0f / (1.0f + exp(-in));
}

static float
eml_net_tanh(float in) {
    return tanhf(in); 
}

static EmlError
eml_net_softmax(float *input, size_t input_length)
{
    EML_PRECONDITION(input, EmlUninitialized);

    float input_max = -INFINITY;
    for (size_t i = 0; i < input_length; i++) {
        if (input[i] > input_max) {
            input_max = input[i];
        }
    }

    float sum = 0.0f;
    for (size_t i = 0; i < input_length; i++) {
        sum += exp(input[i] - input_max);
    }

    const float offset = input_max + log(sum);
    for (size_t i = 0; i < input_length; i++) {
        input[i] = exp(input[i] - offset);
    }

    return EmlOk;
}

int32_t
eml_net_argmax(const float *values, int32_t values_length) {

    float vmax = -INFINITY;
    int32_t argmax = -1;
    for (int i=0; i<values_length; i++) {
        if (values[i] > vmax) {
            vmax = values[i];
            argmax = i;
        }
    }
    return argmax;
}


static bool
eml_net_valid(EmlNet *model) {
    bool not_null = model->layers && model->activations1 && model->activations2;
    return not_null;
}

static inline int32_t
eml_net_outputs(EmlNet *model) {
    return model->layers[model->n_layers-1].n_outputs;
}

// For binary problem, one output, we need to report [ prob(class_0), prob(class_1)]
static inline int32_t
eml_net_outputs_proba(EmlNet *model) {
    int32_t n_outputs = eml_net_outputs(model);
    if (n_outputs == 1) {
        n_outputs = 2;
    }
    return n_outputs;
}

// Calculate size of activation value arrays
static int32_t
eml_net_find_largest_layer(EmlNet *model) {
    int32_t largest = -1;
    for (int i=0; i<model->n_layers; i++) {
        if (model->layers[i].n_inputs > largest) {
            largest = model->layers[i].n_inputs;
        }
        if (model->layers[i].n_outputs > largest) {
            largest = model->layers[i].n_outputs;
        }
    }
    return largest;
}


// CMSIS-NN tricks
// - fixed-point math
// - quantize to 8 or 16 bit (q7,q15)
// - block-based matrix and vector multiplication
// - weight reordering to match multiplication blocks
// CNN
// - partial im2col, reordering image to match convolution kernel (and size).
// - split x-y pooling. in-place. 4.5x speedup
// Activations
// - SIMD relu on signbit
// CIFAR-10, 80% accuracy, 100ms. 87KB weights, 55KB activations 

// MobileNets
// depthwise-separable convolution, for multiple (color) channels
//
// Strassen matrix multiplication
// Winograd filter-based convolution, 16mul instead of 36. 2-3x speedup on GPU
// "Fast algorithms for convolutional neural networks"
// https://arxiv.org/abs/1509.09308
//
// Convolutional Kernel Networks
// https://papers.nips.cc/paper/5348-convolutional-kernel-networks.pdf
// Approximation of CNN with Gaussian kernels, on unsupervised feature kernels
// reached state-of-art in MINST/CIFAR-10 with linear SVM classifier
// scattering transform also did well


EmlError
eml_net_layer_forward(const EmlNetLayer *layer,
                    const float *in, int32_t in_length,
                    float *out, int32_t out_length)
{
    EML_PRECONDITION(in_length >= layer->n_inputs, EmlSizeMismatch);
    EML_PRECONDITION(out_length >= layer->n_outputs, EmlSizeMismatch);
    EML_PRECONDITION(layer->weights, EmlUninitialized);
    EML_PRECONDITION(layer->biases, EmlUninitialized);

    //printf("weights "); print_array(layer->weights, layer->n_inputs*layer->n_outputs);
    //printf("biases "); print_array(layer->biases, layer->n_outputs);

    // TODO: matrix multiplication should be done in blocks. Ex 2x4*4x2 = 2x2
    // multiply inputs by weights
    for (int o=0; o<layer->n_outputs; o++) {
        float sum = 0.0f;
        for (int i=0; i<layer->n_inputs; i++) {
            const int w_idx = o+(i*layer->n_outputs); // not stored continious
            const float w = layer->weights[w_idx];
            sum += w * in[i];
        }

        out[o] = sum + layer->biases[o];

    }

    // apply activation function
    if (layer->activation == EmlNetActivationIdentity) {
        // no-op
    } else if (layer->activation == EmlNetActivationRelu) {
        for (int i=0; i<layer->n_outputs; i++) {
            out[i] = eml_net_relu(out[i]);
        }
    } else if (layer->activation == EmlNetActivationLogistic) {
        for (int i=0; i<layer->n_outputs; i++) {
            out[i] = eml_net_expit(out[i]);
        }
    } else if (layer->activation == EmlNetActivationTanh) {
        for (int i=0; i<layer->n_outputs; i++) {
            out[i] = eml_net_tanh(out[i]);
        }
    } else if (layer->activation == EmlNetActivationSoftmax) {
        eml_net_softmax(out, layer->n_outputs);
    } else {
        return EmlUnsupported;
    }

    //printf("activations "); print_array(out, layer->n_outputs);

    return EmlOk;
}


// Run inferences. Leaves results in activations2
EmlError
eml_net_infer(EmlNet *model, const float *features, int32_t features_length)
{
    EML_PRECONDITION(eml_net_valid(model), EmlUninitialized);
    EML_PRECONDITION(model->n_layers >= 2, EmlUnsupported);
    EML_PRECONDITION(features_length == model->layers[0].n_inputs, EmlSizeMismatch);
    EML_PRECONDITION(model->activations_length >= eml_net_find_largest_layer(model), EmlSizeMismatch);

    const int32_t buffer_length = model->activations_length; 
    float *buffer1 = model->activations1;
    float *buffer2 = model->activations2;

    // Input layer
    EML_CHECK_ERROR(eml_net_layer_forward(&model->layers[0], features,
                        features_length, buffer1, buffer_length));

    // Hidden layers
    for (int l=1; l<model->n_layers-1; l++) {
        const EmlNetLayer *layer = &model->layers[l];
        // PERF: avoid copying, swap buffers instead
        EML_CHECK_ERROR(eml_net_layer_forward(layer, buffer1, buffer_length, buffer2, buffer_length));
        for (int i=0; i<buffer_length; i++) {
            buffer1[i] = buffer2[i];
        }
    }

    // Output layer
    EML_CHECK_ERROR(eml_net_layer_forward(&model->layers[model->n_layers-1],
                        buffer1, buffer_length, buffer2, buffer_length));

    return EmlOk;
}

EmlError
eml_net_predict_proba(EmlNet *model, const float *features, int32_t features_length,
                                  float *out, int32_t out_length)
{
    EML_PRECONDITION(eml_net_valid(model), EmlUninitialized);
    EML_PRECONDITION(features, EmlUninitialized);
    EML_PRECONDITION(out, EmlUninitialized);
    const int32_t n_outputs = eml_net_outputs_proba(model);
    EML_PRECONDITION(out_length == n_outputs, EmlSizeMismatch);

    EML_CHECK_ERROR(eml_net_infer(model, features, features_length));

    float proba_sum = 0.0f;

    if (n_outputs == 2) {
        out[1] = model->activations2[0];
        out[0] = 1.0f - out[1];
        proba_sum = out[0] + out[1];
    } else {
        for (int i=0; i<n_outputs; i++) {
            const float p = model->activations2[i];
            out[i] = p;
            proba_sum += p; 
        }
    }

    EML_POSTCONDITION(fabs(proba_sum - 1.0) < 0.001, EmlPostconditionFailed);

    return EmlOk;
}


// Return the class, or -EmlError on failure
int32_t
eml_net_predict(EmlNet *model, const float *features, int32_t features_length) {

    const EmlError error = eml_net_infer(model, features, features_length);
    if (error != EmlOk) {
        return -error;
    }

    const int32_t n_outputs = eml_net_outputs(model);

    int32_t _class = -EmlUnknownError;
    if (n_outputs == 1) {
        _class = (model->activations2[0] > 0.5f) ? 1 : 0;
    } else if (n_outputs > 1) {
        _class = eml_net_argmax(model->activations2, n_outputs);
    }

    return _class;
}
