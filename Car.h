#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

class Car:public Vehicle
{
private:
    /* data */
public:
    Car(/* args */) : Vehicle(){}
    Car(int ID) : Vehicle(ID) {}
    //~Car();

    int getParkingDuration();
};

#endif