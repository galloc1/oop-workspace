#include <iostream>

using namespace std;

int min_element(int array[], int n){
    int total = 0;
    if(n>0){
        total = array[0];
        for(int i = 0; i<n; i++){
            if(array[i]<total){
                total = array[i];
            }
        }       
    }
    return total;
}

int max_element(int array[], int n){
    int total = 0;
    if(n>0){
        total = array[0];
        for(int i = 0; i<n; i++){
            if(array[i]>total){
                total = array[i];
            }
        }       
    }
    return total;
}

void set_min_element(int array[], int n){
    int total = 0;
    if(n>0){
        total = 0;
        for(int i = 0; i<n; i++){
            if(array[i]<array[total]){
                total = i;
            }
        }       
    }
    array[total] = max_element(array, n);
}

int median_array(int array[], int n){
    int median = 0;
    if(n%2!=0){
        int sortedArray[n];
        for(int i = 0; i<n; i++){
            sortedArray[i] = min_element(array, n);
            set_min_element(array, n);
        }
        median = sortedArray[n/2+n%2];
    }
    return median;
}

int main(){
    int array[10] = {1, 2, 2, 5, 9, 10, 10, 11, 15, 17};
    int arrayy[10] = {17, 15, 11, 10, 10, 9, 5, 2, 2, 1};
    int arrayyy[6] = {1, 2, 3, 5, 2, 1};
    std::cout << median_array(arrayyy, 6);
    //two_five_nine(array, 0);
    return 0;
}