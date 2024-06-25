import numpy as np
import pandas as pd
from sklearn.neural_network import MLPClassifier
from sklearn.naive_bayes import GaussianNB
from sklearn.ensemble import RandomForestClassifier
from sklearn import preprocessing
from sklearn.model_selection import train_test_split
from sklearn import metrics
#import matplotlib.pyplot as plt
from sklearn.metrics import f1_score
from sklearn.metrics import confusion_matrix
import emlearn
from sklearn.tree import DecisionTreeClassifier
from micromlgen import port
from sklearn.svm import SVC

datasetFile = "../Ride8val.csv"

print("Using file: " + datasetFile + " as dataset ")

cell_df = pd.read_csv(datasetFile, sep=";", decimal=",")
feature_df = cell_df[['Acc', 'Gyr', 'x_acc', 'y_acc', 'z_acc', 'x_gyr', 'y_gyr', 'z_gyr']]
X = np.asarray(feature_df)
y = np.asarray(cell_df['Label'])

X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=4, stratify=y)
print('Train set:', X_train.shape, y_train.shape)
print('Test set:', X_test.shape, y_test.shape)

#np.set_printoptions(threshold=np.inf)
#print(X_test)

activations = ['tanh', 'logistic', 'relu']
layerslist = [(2,), (5,), (10,), (2, 2), (2, 5), (5, 2), (5, 5), (10, 5), (5, 10), (10, 10), (5, 5, 10), (5, 10, 5),
              (10, 10, 5)]
for curr_activation in activations:
    for curr_layers in layerslist:
        print('Testing MultiLayerPerceptron with ' + curr_activation + ' activation algo and ' + str(
            curr_layers) + ' hidden layers')
        try:
            mlp = MLPClassifier(hidden_layer_sizes=curr_layers, activation=curr_activation, max_iter=4000)
            mlp.fit(X_train, y_train)
            y_hat_mlp = mlp.predict(X_test)
            print("MLP Accuracy: ", metrics.accuracy_score(y_test, y_hat_mlp))
            print("MLP f1: ", f1_score(y_test, y_hat_mlp, average='weighted'))
            print(confusion_matrix(y_test, y_hat_mlp))
            print("")
            cmodel = emlearn.convert(mlp)
            cmodel.save(
                file='../output/MLP' + str(curr_layers).replace(',', '-').replace('(', '-').replace(')', '-').replace(
                    ' ', '') + curr_activation + '-8val-lib.c', name="classifier")
        except Exception as e:
            print('\033[91m' + "Model failed!")
            print(e)
            print('\033[0m')  # end color
            continue

estimators_list = [2, 5, 10, 15]
for curr_estimators in estimators_list:
    print("Testing RandomForest with " + str(curr_estimators) + " estimators")
    try:
        rfc = RandomForestClassifier(curr_estimators)
        rfc.fit(X_train, y_train)
        y_hat_rfc = rfc.predict(X_test)
        print("\nRandomForest Accuracy: ", metrics.accuracy_score(y_test, y_hat_rfc))
        print("RandomForest f1: ", f1_score(y_test, y_hat_rfc, average='weighted'))
        print(confusion_matrix(y_test, y_hat_rfc))
        print("")
        cmodel = emlearn.convert(rfc)
        cmodel.save(file='../output/RF-' + str(curr_estimators) + '-8val-lib.c', name="classifier")
    except Exception as e:
        print('\033[91m' + "Model failed!")
        print(e)
        print('\033[0m')  # end color
        continue

print("Testing Gaussian Naive Bayes classifier")
gnb = GaussianNB()
gnb.fit(X_train, y_train)
y_hat_gnb = gnb.predict(X_test)
print("\nGaussian Naive Bayes Accuracy: ", metrics.accuracy_score(y_test, y_hat_gnb))
print("Gaussian Naive Bayes f1: ", f1_score(y_test, y_hat_gnb, average='weighted'))
print(confusion_matrix(y_test, y_hat_gnb))
print("")
cmodel = emlearn.convert(gnb)
cmodel.save(file='../output/GNB-8val-lib.c', name="classifier")

criterion_list = ["gini", "entropy"]
for curr_criterion in criterion_list:
    try:
        print("Testing DecisionTreeClassifier with criterion: " + curr_criterion)
        DecTree = DecisionTreeClassifier(criterion=curr_criterion, max_depth=12)
        DecTree.fit(X_train, y_train)
        y_hat_DT = DecTree.predict(X_test)
        print("DecisionTrees Accuracy: ", metrics.accuracy_score(y_test, y_hat_DT))
        print("DecisionTrees f1: ", f1_score(y_test, y_hat_DT, average='weighted'))
        print(confusion_matrix(y_test, y_hat_DT))
        print("")
        cmodel = emlearn.convert(DecTree)
        cmodel.save(file='../output/DT-' + str(curr_criterion) + '-8val-lib.c', name="classifier")
    except Exception as e:
        print('\033[91m' + "Model failed!")
        print(e)
        print('\033[0m')  # end color
        continue

kernel_list = ["linear", "poly", "rbf", "sigmoid"]
for curr_kernel in kernel_list:
    try:
        print("Testing SupportVectorMachine with kernel: " + curr_kernel)
        svc_model = SVC(kernel=curr_kernel, gamma=0.0001).fit(X_train, y_train)
        y_hat_svc = svc_model.predict(X_test)
        print("SVM Accuracy: ", metrics.accuracy_score(y_test, y_hat_svc))
        print("SVM f1: ", f1_score(y_test, y_hat_svc, average='weighted'))
        print(confusion_matrix(y_test, y_hat_svc))
        print("")
        file = open('../output/SVM-' + str(curr_kernel) + '-8val-lib.c', "w")
        file.write(port(svc_model, classmap={0: 'Ride', 1: 'Fall'}))
        file.close()
    except Exception as e:
        print('\033[91m' + "Model failed!")
        print(e)
        print('\033[0m')  # end color
        continue


print("Done generating models")
