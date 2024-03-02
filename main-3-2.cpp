#include <iostream>

using namespace std;

extern int median_array(int array[], int n);

int main (){
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << median_array(array, 10);
    return 0;
}