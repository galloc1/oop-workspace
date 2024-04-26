#include "Airplane.h"

Airplane::Airplane() : numPassengers(0), AirVehicle(){}
Airplane::Airplane(int w, int p) : numPassengers(p), AirVehicle(w){}

void Airplane::reducePassengers(int x){
    numPassengers-=x;
    if(numPassengers<0){
        numPassengers = 0;
    }
}

void Airplane::fly(int headwind, int minutes){
    float consumption;
    if(headwind<60){
        consumption = 0.25;
    }
    else{
        consumption = 0.5;
    }
    consumption+=0.001*numPassengers;

    if(fuel-consumption>=20.0){
        fuel-=consumption;
        numberOfFlights++;
    }
}