#include "Appliance.h"

Appliance::Appliance() : powerRating(0), isOn(false){}
Appliance::Appliance(int powerRating) : powerRating(powerRating), isOn(false){}

void Appliance::turnOff(){isOn=false;}
void Appliance::turnOn(){isOn=true;}
double Appliance::getPowerConsumption(){return 0;}

int Appliance::get_powerRating(){return powerRating;}
bool Appliance::get_isOn(){return isOn;}

void Appliance::set_powerRating(int powerRating){this->powerRating = powerRating;}
void Appliance::set_isOn(bool isOn){this->isOn = isOn;}