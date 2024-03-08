#include <iostream>

using namespace std;

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main(){
    int array[5] = {1, 0, 0, 1, 1};
    binary_to_int(array, 5);
    return 0;
}