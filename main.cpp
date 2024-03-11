#include "workshop.h"
#include <iostream>

using namespace std;

extern void changeValue(double* pointer);
extern void printArray(double* arrayAddress, int n);
extern double arrayMax(double* arrayAddress, int n);
extern double* dynamicArray(int N, double M);

int main(){
    //Part 2
    cout<<"Part 2"<<endl<<"---------------"<<endl;
    
    double valueToChange = 13.2;
    double* valueToChangeAddress = &valueToChange;

    cout << "Initial Value: " << valueToChange << endl;

    changeValue(valueToChangeAddress);

    cout << "New Value: "<<valueToChange<<endl;

    //Part 3
    cout<<"---------------"<<endl<<"Part 3"<<endl<<"---------------"<<endl;

    double arrayToPrint[10] = {0, 1, 2, 3, 4, 5,6,7,8,9}; 

    printArray(arrayToPrint, 10);

    //Part 4
    cout<<"---------------"<<endl<<"Part 4"<<endl<<"---------------"<<endl;

    double arrayToFindMax[10] = {5,2,7,3,8,0,5,7,8,3}; 

    cout<<arrayMax(arrayToFindMax, 10)<<endl;

    //Part 7
    cout<<"---------------"<<endl<<"Part 6"<<endl<<"---------------"<<endl;
    
    double* setValueDynamicArray = dynamicArray(30, 8.9);

    printArray(setValueDynamicArray, 30);

    delete[] setValueDynamicArray;

    return 0;
}