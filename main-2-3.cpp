#include <iostream>

using namespace std;

extern int sum_if_palindrome(int integers[], int length);

int main(){
    int array[5] = {1, 0, 0, 1, 1};
    cout << sum_if_palindrome(array, 5) << endl;
    return 0;
}