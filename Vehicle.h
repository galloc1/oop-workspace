#ifndef VEHICLE_H
#define VEHICLE_H
#include <time.h>

class Vehicle
{
protected:
    time_t timeOfEntry;
    int ID;
public:
    Vehicle() : timeOfEntry(time(nullptr)), ID(0) {}
    Vehicle(int ID);
    virtual int getParkingDuration() {return 0;}
    //~Vehicle();

    int getID() {return ID;}
};

#endif