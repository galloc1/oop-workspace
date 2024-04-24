#include "House.h"
#include <iostream>

House::House() : appliances(new Appliance*[0]), numAppliances(0), currentSize(0){}
House::House(int numAppliances) : numAppliances(numAppliances), appliances(new Appliance*[numAppliances]), currentSize(0){}

bool House::addAppliance(Appliance* appliance){if(currentSize<numAppliances){appliances[currentSize]=appliance;currentSize++;return true;}else{return false;}}

double House::getTotalPowerConsumption(){double total = 0;for(int i=0;i<currentSize-1;i++){total+=appliances[i]->getPowerConsumption();}std::cout << currentSize; return total;}