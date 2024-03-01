#include <iostream>

using namespace std;

void two_five_nine(int array[], int n){
    int twos = 0, fours = 0, nines = 0;
    for(int i = 0; i<n;i++){
        switch(array[i]){
            case 2:
                twos++;
                break;
            case 4:
                fours++;
                break;
            case 9:
                nines++;
                break;
            default:
                break;
        }
    }
    std::cout << "2:" << twos << ";4:" << fours << ";9:" << nines << ";" << endl;
}