#include "AirVehicle.h"
#include "Airplane.h"
#include <iostream>

using namespace std;

void printAirplane(Airplane* airplane){
    cout << "Passengers: " << airplane->get_numPassengers() << endl;
    cout << "Weight: " << airplane->get_weight() << endl;
    cout << "Fuel: " << airplane->get_fuel() << endl;
    cout << "Number of Flights: " << airplane->get_numberOfFlights() << endl;
}


int main(){
    Airplane* airplane = new Airplane();

    airplane->refuel();
    airplane->fly(10, 20);
    airplane->set_weight(50);

    printAirplane(airplane);
    delete airplane;


    airplane = new Airplane(100, 10);

    airplane->set_fuel(45.0);
    airplane->set_numberOfFlights(10);

    printAirplane(airplane);
    delete airplane;

    return 0;
}