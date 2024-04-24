#include "House.h"
#include "TV.h"
#include "Fridge.h"
#include <iostream>

int main(){
    House house(3);
    std::cout << house.addAppliance(new TV(50, 30));
    std::cout << house.addAppliance(new Fridge(50, 100));
    std::cout << house.addAppliance(new Fridge(50, 100));
    std::cout << house.addAppliance(new TV());

    std::cout << house.getTotalPowerConsumption();
    return 0;
}