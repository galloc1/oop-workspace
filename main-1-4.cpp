#include <iostream>

using namespace std;

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main (){
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arrayy[10] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    std::cout << sum_two_arrays(array, arrayy, 10);
    return 0;
}