#include <iostream>

using namespace std;

extern int max_element(int array[], int n);

int main (){
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << max_element(array, 10);
    return 0;
}