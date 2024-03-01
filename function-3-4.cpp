#include <iostream>

using namespace std;

void print_pass_fail(char grade){
    string output;
    switch(grade){
        case 'A':
            output = "Pass";
            break;
        case 'B':
            output = "Pass";
            break;
        case 'C':
            output = "Pass";
            break;
        case 'D':
            output = "Fail";
            break;
        case 'E':
            output = "Fail";
            break;
        default:
            output = "Nothing";
            break;
    }
    std::cout << output << endl;
}