#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

class ParkingLot
{
private:
    Vehicle* vehicles;
    int capacity;
    int numVehicles;
public:
    ParkingLot() : vehicles(new Vehicle[0]), capacity(0), numVehicles(0){}
    ParkingLot(int capacity) : vehicles(new Vehicle[capacity]), capacity(capacity), numVehicles(0){}
    ~ParkingLot(){delete[] vehicles;}
    int getCount(){return numVehicles;}
    void parkVehicle(Vehicle* vehicle);
    void unparkVehicle(int ID);
    int countOverstayingVehicles(int maxParkingDuration);
};


#endif