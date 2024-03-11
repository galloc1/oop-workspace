#include <iostream>

using namespace std;

void changeValue(double* pointer){
    *pointer = 42;
}

void printArray(double* arrayAddress, int n){
    for(int i = 0; i<n; i++){
        cout<<*(arrayAddress+i)<<endl;
    }
}

double arrayMax(double* arrayAddress, int n){
    double max = *arrayAddress;
    for(int i=0; i<n;i++){
        if(*(arrayAddress+i)>max){
            max = *(arrayAddress+i);
        }
    }
    return max;
}

double* dynamicArray(int N, double M){
    double* doub = new double[N];
    for(int i=0; i<N; i++){
        *(doub+i) = M;
    }
    return doub;
}