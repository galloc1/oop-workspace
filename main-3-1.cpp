#include "House.h"
#include <iostream>

int main(){
    House house(3);
    std::cout <<house.getTotalPowerConsumption();
    return 0;
}