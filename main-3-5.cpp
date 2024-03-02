#include <iostream>

using namespace std;

extern double sum_even(double array[], int n);

int main (){
    double array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << sum_even(array, 10);
    return 0;
}