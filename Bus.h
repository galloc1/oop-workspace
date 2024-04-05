#ifndef BUS_H
#define BUS_H
#include "Vehicle.h"

class Bus:public Vehicle
{
private:
    /* data */
public:
    Bus(/* args */) : Vehicle(){}
    Bus(int ID) : Vehicle(ID) {}
    //~Bus();

    int getParkingDuration();
};

#endif