#include <iostream>

using namespace std;

extern double arrayMin(double* array, int size);

int main(){
    double* array = new double[10];
    array[0] = 5;
    array[1] = 8;
    array[2] = 2;
    array[3] = 5;
    array[4] = 4;
    array[5] = 9;
    array[6] = 0;
    array[7] = 3;
    array[8] = 5;
    array[9] = 5;
    cout << arrayMin(array, 10) << endl;
    return 0;
}