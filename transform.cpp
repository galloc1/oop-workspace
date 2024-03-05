#include <iostream>

using namespace std;

string reverseString(string toReverse){
    string reversedStr = "";
    for(int i=toReverse.length()-1; i>=0; i--){
        reversedStr += toReverse[i];
    }
    return reversedStr;
}

string decimalToBinary(int decimalNum){
    string binaryNum = "";
    int quot = decimalNum;
    while(quot!=0){
        binaryNum += std::to_string(quot%2);
        quot /= 2;
    }

    return reverseString(binaryNum);
}

int main(){
    std::cout << decimalToBinary(2) << endl;
    return 0;
}