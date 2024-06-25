
    // !!! This file is generated using emlearn !!!

    #include "eml_trees.h"
    

EmlTreesNode lib_nodes[17] = {
  { 1, 8.982545852661133, 1, 2 },
  { -1, 1, -1, -1 },
  { -1, 0, -1, -1 },
  { 0, 650.0196113586426, 1, 2 },
  { 1, 8.94518931210041, 1, 2 },
  { 0, 634.5537300109863, 6, 2 },
  { 0, 62.438703536987305, 1, 7 },
  { 0, 68.62764358520508, 2, 1 },
  { 0, 644.4616813659668, 1, 2 },
  { 0, 650.0196113586426, 1, 2 },
  { 0, 628.9958000183105, 1, 2 },
  { 0, 686.4694023132324, 1, 2 },
  { 0, 650.0196113586426, 13, 2 },
  { 1, 0.8776607662439346, 1, 2 },
  { 0, 634.5537300109863, 15, 2 },
  { 0, 65.29286003112793, 1, 16 },
  { 0, 72.48793029785156, 2, 1 } 
};

int32_t lib_tree_roots[10] = { 0, 3, 4, 5, 8, 9, 10, 11, 12, 14 };

EmlTrees lib = {
        17,
        lib_nodes,	  
        10,
        lib_tree_roots,
    };

static inline int32_t lib_predict_tree_0(const float *features, int32_t features_length) {
          if (features[1] < 8.982545852661133) {
              return 1;
          } else {
              return 0;
          }
        }
        

static inline int32_t lib_predict_tree_1(const float *features, int32_t features_length) {
          if (features[0] < 650.0196113586426) {
              return 1;
          } else {
              return 0;
          }
        }
        

static inline int32_t lib_predict_tree_2(const float *features, int32_t features_length) {
          if (features[1] < 8.94518931210041) {
              return 1;
          } else {
              return 0;
          }
        }
        

static inline int32_t lib_predict_tree_3(const float *features, int32_t features_length) {
          if (features[0] < 634.5537300109863) {
              if (features[0] < 62.438703536987305) {
                  return 1;
              } else {
                  if (features[0] < 68.62764358520508) {
                      return 0;
                  } else {
                      return 1;
                  }
              }
          } else {
              return 0;
          }
        }
        

static inline int32_t lib_predict_tree_4(const float *features, int32_t features_length) {
          if (features[0] < 644.4616813659668) {
              return 1;
          } else {
              return 0;
          }
        }
        

static inline int32_t lib_predict_tree_5(const float *features, int32_t features_length) {
          if (features[0] < 650.0196113586426) {
              return 1;
          } else {
              return 0;
          }
        }
        

static inline int32_t lib_predict_tree_6(const float *features, int32_t features_length) {
          if (features[0] < 628.9958000183105) {
              return 1;
          } else {
              return 0;
          }
        }
        

static inline int32_t lib_predict_tree_7(const float *features, int32_t features_length) {
          if (features[0] < 686.4694023132324) {
              return 1;
          } else {
              return 0;
          }
        }
        

static inline int32_t lib_predict_tree_8(const float *features, int32_t features_length) {
          if (features[0] < 650.0196113586426) {
              if (features[1] < 0.8776607662439346) {
                  return 1;
              } else {
                  return 0;
              }
          } else {
              return 0;
          }
        }
        

static inline int32_t lib_predict_tree_9(const float *features, int32_t features_length) {
          if (features[0] < 634.5537300109863) {
              if (features[0] < 65.29286003112793) {
                  return 1;
              } else {
                  if (features[0] < 72.48793029785156) {
                      return 0;
                  } else {
                      return 1;
                  }
              }
          } else {
              return 0;
          }
        }
        

int32_t lib_predict(const float *features, int32_t features_length) {

        int32_t votes[2] = {0,};
        int32_t _class = -1;

        _class = lib_predict_tree_0(features, features_length); votes[_class] += 1;
    _class = lib_predict_tree_1(features, features_length); votes[_class] += 1;
    _class = lib_predict_tree_2(features, features_length); votes[_class] += 1;
    _class = lib_predict_tree_3(features, features_length); votes[_class] += 1;
    _class = lib_predict_tree_4(features, features_length); votes[_class] += 1;
    _class = lib_predict_tree_5(features, features_length); votes[_class] += 1;
    _class = lib_predict_tree_6(features, features_length); votes[_class] += 1;
    _class = lib_predict_tree_7(features, features_length); votes[_class] += 1;
    _class = lib_predict_tree_8(features, features_length); votes[_class] += 1;
    _class = lib_predict_tree_9(features, features_length); votes[_class] += 1;
    
        int32_t most_voted_class = -1;
        int32_t most_voted_votes = 0;
        for (int32_t i=0; i<2; i++) {

            if (votes[i] > most_voted_votes) {
                most_voted_class = i;
                most_voted_votes = votes[i];
            }
        }
        return most_voted_class;
    }
    
