#include "Fridge.h"

Fridge::Fridge() : Appliance(), volume(0){}
Fridge::Fridge(int powerRating, double volume) : Appliance(powerRating), volume(volume){}

void Fridge::setVolume(double volume){this->volume = volume;}
double Fridge::getVolume(){return volume;}

double Fridge::getPowerConsumption(){double powerConsumption = powerRating*24.0*(volume/100.0); return powerConsumption;}