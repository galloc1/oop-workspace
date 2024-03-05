#include <iostream>

using namespace std;

string rightShift(string number){
    return number+"0";
}

int main(){
    std::cout << rightShift("1001") << endl ;
    return 0;
}