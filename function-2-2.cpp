#include <cmath>

int binary_to_int(int binary_digits[], int number_of_digits){
    int num = 0;
    for(int i = number_of_digits-1; i>=0; i--){
        num += pow(binary_digits[i]*2, i);
    }
    return num;
}