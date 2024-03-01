#include <iostream>

using namespace std;

double sum_even(double array[], int n){
    double total = 0.0;
    if(n>0){
        for(int i=0; i<n; i++){
            if(i%2==0){
                total+=array[i];
            }
        }
    }
    return total;
}

int main(){
    int array[10] = {1, 2, 2, 5, 9, 10, 10, 11, 15, 17};
    int arrayy[10] = {17, 15, 11, 10, 10, 9, 5, 2, 2, 1};
    int arrayyy[6] = {1, 2, 3, 5, 2, 1};
    double arrayyyy[10] = {1.9, 2.8, 3.7, 4.6, 5.5, 6.4, 7.3, 8.2, 9.1, 0.0};
    std::cout << sum_even(arrayyyy, 10);
    //two_five_nine(array, 0);
    return 0;
}