#include <iostream>

using namespace std;

extern void print_pass_fail(char grade);

int main (){
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    print_pass_fail('A');
    return 0;
}