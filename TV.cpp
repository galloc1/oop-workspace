#include "TV.h"
#include <iostream>

TV::TV() : Appliance(), screenSize(0){}
TV::TV(int powerRating, double screenSize) : Appliance(powerRating), screenSize(screenSize){std::cout<<"Power rating: "<<powerRating << std::endl << "Screen size: "<<screenSize<<std::endl;}

double TV::getPowerConsumption(){double powerConsumption = powerRating*(screenSize/10.0); std::cout << "Power Consumption: "<<powerConsumption<<std::endl; return powerConsumption;}

double TV::getScreenSize(){return screenSize;}

void TV::setScreenSize(double screenSize){this->screenSize = screenSize;}