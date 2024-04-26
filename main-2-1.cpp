#include "AirVehicle.h"
#include "Helicopter.h"
#include <iostream>

using namespace std;

void printHelicopter(Helicopter* helicopter){
    cout << "Vehicle: " << helicopter->get_name() << endl;
    cout << "Weight: " << helicopter->get_weight() << endl;
    cout << "Fuel: " << helicopter->get_fuel() << endl;
    cout << "Number of Flights: " << helicopter->get_numberOfFlights() << endl;
}


int main(){
    Helicopter* helicopter = new Helicopter();

    helicopter->refuel();
    helicopter->fly(10, 20);
    helicopter->set_weight(50);

    printHelicopter(helicopter);
    delete helicopter;


    helicopter = new Helicopter(100, "Lil' Lappy");

    helicopter->set_fuel(45.0);
    helicopter->set_numberOfFlights(10);

    printHelicopter(helicopter);
    delete helicopter;

    return 0;
}