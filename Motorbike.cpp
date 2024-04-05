 #include "Motorbike.h"
    int Motorbike::getParkingDuration(){
        return (time(nullptr)-timeOfEntry)*0.85;
    }