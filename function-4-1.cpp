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

int secondSmallestSum(int *numbers,int length){
    int min = numbers[0], min2 = numbers[0], minDex = 0;
    for(int i=0; i<length; i++){
        if(numbers[i]<min){
            min = numbers[i];
            minDex = i;
        }
    }
    for(int i=0; i<length; i++){
        if(numbers[i]<min2 && i!=minDex){
            min2 = numbers[i];
        }
    }
    return min2;
}