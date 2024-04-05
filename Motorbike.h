#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include "Vehicle.h"

class Motorbike:public Vehicle
{
private:
    /* data */
public:
    Motorbike(/* args */) : Vehicle(){}
    //~Motorbike();
    Motorbike(int ID) : Vehicle(ID) {}

    int getParkingDuration();
};

#endif