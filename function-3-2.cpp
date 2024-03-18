#include <iostream>

using namespace std;

int *readNumbers(){
    int* inputtedNumbers = new int[10];
    for(int i=0; i<10; i++){
        string num;
        cin >> num;
        inputtedNumbers[i] = stoi(num);
    }
    return inputtedNumbers;
}

bool equalsArray(int *numbers1,int *numbers2,int length){
    if(length<1){
        return false;
    }
    for(int i=0; i<length; i++){
        if(numbers1[i]!=numbers2[i]){
            return false;
        }
    }
    return true;
}

int *reverseArray(int *numbers1,int length){
    int* reversedArray = new int[length];
    for(int i=0; i<length; i++){
        reversedArray[i] = numbers1[length-i-1];
    }
    return reversedArray;
}