#include "TV.h"

TV::TV() : Appliance(), screenSize(0){}
TV::TV(int powerRating, double screenSize) : Appliance(powerRating), screenSize(screenSize){}

double TV::getPowerConsumption(){double powerConsumption = powerRating*(screenSize/10.0); return powerConsumption;}

double TV::getScreenSize(){return screenSize;}

void TV::setScreenSize(double screenSize){this->screenSize = screenSize;}