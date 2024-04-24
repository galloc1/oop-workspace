#include "Fridge.h"
#include <iostream>

Fridge::Fridge() : Appliance(), volume(0){std::cout<<"Power rating: "<<powerRating << std::endl << "Volume: "<<volume<<std::endl;}
Fridge::Fridge(int powerRating, double volume) : Appliance(powerRating), volume(volume){}

void Fridge::setVolume(double volume){this->volume = volume;}
double Fridge::getVolume(){return volume;}

double Fridge::getPowerConsumption(){double powerConsumption = powerRating*24.0*(volume/100.0); std::cout << "Power Consumption: "<<powerConsumption<<std::endl; return powerConsumption;}