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
    int smallestNumber = numbers[0];
    int indexOfSmallest = 0;

    for(int i=0; i<length; i++){
        if(smallestNumber>numbers[i]){
            smallestNumber = numbers[i];
            if(smallestNumber<0){
                break;
            }
            indexOfSmallest = i;
        }
    }

    if(smallestNumber<0){
        int smallestSum = 0;
        int secondSmallestSum = 0;
        int closestToZero = numbers[0];

        for(int i = 0; i<length; i++){
            if(numbers[i]<0){
                smallestSum+=numbers[i];
            }
            if(abs(numbers[i]) < closestToZero){
                closestToZero = abs(numbers[i]);
            }
        }

        secondSmallestSum = smallestSum+closestToZero;
        return secondSmallestSum;
    }
    else{
        int secondSmallestNumber = numbers[0];
        for(int i=0; i<length; i++){
            if(numbers[i]<secondSmallestNumber && i!=indexOfSmallest){
                secondSmallestNumber = numbers[i];
            }
        }
        return secondSmallestNumber;
    }
}