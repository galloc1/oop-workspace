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
    int smallestSum = 0;
    int indexOfSmallestSum = 0;
    int endOfSmallestSum = 0;
    int secondSmallestSum = 0;

    for(int i=0; i<length; i++){
        int smallestFromIndexI = 0;

        for(int j=i; j<length; j++){
            smallestFromIndexI += numbers[j];
            if(smallestFromIndexI<smallestSum){
                smallestSum = smallestFromIndexI;
                indexOfSmallestSum = i;
                endOfSmallestSum = j;
            }
        }

    }

    for(int i=0; i<length; i++){
        int smallestFromIndexI = 0;

        for(int j=i; j<length; j++){
            smallestFromIndexI += numbers[j];
            if(smallestFromIndexI<secondSmallestSum){
                if(!(i==indexOfSmallestSum && j==endOfSmallestSum)){
                    secondSmallestSum = smallestFromIndexI;
                }
            }
        }
        
    }
    return secondSmallestSum;
}