#include "Bus.h"
int Bus::getParkingDuration(){
        return (time(nullptr)-timeOfEntry)*0.75;
    }