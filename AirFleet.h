#ifndef AIRFLEET_H
#define AIRFLEET_H
#include "AirVehicle.h"
#include "Helicopter.h"
#include "Airplane.h"

class AirFleet{
    protected:
        AirVehicle **fleet;
    public:
        AirFleet();
        AirVehicle **get_fleet(){return fleet;}
};

#endif