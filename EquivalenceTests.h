#ifndef EQUIVALENCETESTS_H
#define EQUIVALENCETESTS_H

#include <iostream>
#include "Addition.h"

class EquivalenceTests{
public:
    void runTests(){
        testPositiveIntegers();
        testNegativeIntegers();
        testMixedIntegers();
    }

private:
    void testPositiveIntegers(){
        Addition addition;
        if(addition.add(5, 10)!=15){
            std::cout << "Test 1 failed!" << std::endl;
        }
    }
    void testNegativeIntegers(){
        Addition addition;
        if(addition.add(-4, -5)!=-9){
            std::cout << "Test 2 failed!" << std::endl;
        }
    }
    void testMixedIntegers(){
        Addition addition;
        if(addition.add(5, -10)!=-5){
            std::cout << "Test 3 failed!" << std::endl;
        }
    }
};


#endif