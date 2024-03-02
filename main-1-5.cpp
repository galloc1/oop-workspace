#include <iostream>

using namespace std;

extern int count_evens(int number);

int main (){
    std::cout << count_evens(10);
    return 0;
}