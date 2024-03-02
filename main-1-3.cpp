#include <iostream>

using namespace std;

extern int num_count(int array[], int n, int number);

int main (){
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << num_count(array, 10, 0);
    return 0;
}