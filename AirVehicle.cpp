#include "AirVehicle.h"

//Constructors
AirVehicle::AirVehicle() : weight(0), numberOfFlights(0), fuel(0.0) {}  // Default constructor, does nothing
AirVehicle::AirVehicle(int w) : weight(w), numberOfFlights(0), fuel(100.0) {}   //Creates AirVehicle with weight w and default parameters

//Methods
void AirVehicle::refuel(){
    fuel = 100.0;
}

void AirVehicle::fly(int headwind, int minutes){
    numberOfFlights++;
}