#include "Fridge.h"
#include <iostream>

Fridge::Fridge() : Appliance(), volume(0){}
Fridge::Fridge(int powerRating, double volume) : Appliance(powerRating), volume(volume){}

void Fridge::setVolume(double volume){this->volume = volume;}
double Fridge::getVolume(){return volume;}

double Fridge::getPowerConsumption(){double powerConsumption = powerRating*24*(volume/100); std::cout<<powerConsumption; return powerConsumption;}