#ifndef UNITTEST_H
#define UNITTEST_H

#include <iostream>
#include "Addition.h"

class UnitTest{
public:
    void runTests(){
        testAddition();
    }

private:
    void testAddition(){
        Addition addition;

        if(addition.add(1, 2) != 3){
            std::cout << "Integer test failed!" << std::endl;
        }
        if(addition.add(-1, -2) != -3){
            std::cout << "Negative integer test failed!" << std::endl;
        }
        if(addition.add(1, -1) != 0){
            std::cout << "Mixed integer test failed!" << std::endl;
        }
    }
};

#endif