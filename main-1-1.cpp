#include "AirVehicle.h"
#include <iostream>

using namespace std;

void printAirVehicle(AirVehicle* airVehicle, string name){
    cout << "Vehicle: " << name << endl;
    cout << "Weight: " << airVehicle->get_weight() << endl;
    cout << "Fuel: " << airVehicle->get_fuel() << endl;
    cout << "Number of Flights: " << airVehicle->get_numberOfFlights() << endl;
}


int main(){
    AirVehicle* airVehicle = new AirVehicle();

    airVehicle->refuel();
    airVehicle->fly(10, 20);
    airVehicle->set_weight(50);

    printAirVehicle(airVehicle, "Blank Slate");
    delete airVehicle;


    airVehicle = new AirVehicle(100);

    airVehicle->set_fuel(45.0);
    airVehicle->set_numberOfFlights(10);

    printAirVehicle(airVehicle, "Lil' Lappy");
    delete airVehicle;

    return 0;
}