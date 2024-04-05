#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main(){
    ParkingLot parkingLot(10);
    for(int i=0; i<10; i++){
        Vehicle vehicle;
        std::string type;
        int ID;
        std::cin>>type;
        std::cin>>ID;
        if(type=="Car"){
            vehicle = Car(ID);
        }
        else if(type=="Bus"){
            vehicle = Bus(ID);
        }
        else if(type=="Motorbike"){
            vehicle = Motorbike(ID);
        }
        parkingLot.parkVehicle(&vehicle);
    }

    std::cout<<parkingLot.countOverstayingVehicles(15);

    return 0;
}