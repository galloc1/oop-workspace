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

void printNumbers(int *numbers,int length){
    for(int i=0; i<length; i++){
        cout << i << " " << numbers[i] << endl;
    }
}