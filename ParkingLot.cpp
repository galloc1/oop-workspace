#include <iostream>
#include "ParkingLot.h"

void ParkingLot::parkVehicle(Vehicle* vehicle){
    if(numVehicles<capacity){
        vehicles[numVehicles] = *vehicle;
        numVehicles++;
    }
    else{
        std::cout << "The lot is full"<<std::endl;
    }
}

void ParkingLot::unparkVehicle(int ID){
    bool isHere = false;
    int numVeh = numVehicles;
    for(int i=0; i<numVeh; i++){
        if(isHere){
            vehicles[i-1]=vehicles[i];
        }
        else if(vehicles[i].getID()==ID){
            isHere = true;
            numVehicles--;
        }
    }
    if(!isHere){
        std::cout<<"Vehicle not in the lot\n";
    }
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration){
    int count = 0;
    for(int i=0; i<numVehicles; i++){
        if(vehicles[i].getParkingDuration()>maxParkingDuration){
            count++;
        }
    }
    return count;
}