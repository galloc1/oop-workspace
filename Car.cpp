#include "Car.h"
int Car::getParkingDuration(){
        return (time(nullptr)-timeOfEntry)*0.9;
    }