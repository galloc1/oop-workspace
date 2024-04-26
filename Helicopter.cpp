#include "Helicopter.h"
#include <string>

//Constructors
Helicopter::Helicopter() : name(""), AirVehicle() {}
Helicopter::Helicopter(int w, std::string n) : name(n), AirVehicle(w) {}

//Inherited Virtuals
void Helicopter::fly(int headwind, int minutes){
    //calculates the fuel consumption of the flight
    float consumption;
    if(headwind<40){
        consumption = 0.18;
    }
    else{
        consumption = 0.4;
    }
    if(weight>5670){
        consumption += 0.01*(weight-5670);
    }
    consumption *= minutes;

    if(fuel-consumption>=20.0){
        fuel-=consumption;
        numberOfFlights++;
    }
}