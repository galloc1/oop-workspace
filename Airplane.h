#ifndef AIRPLANE_H
#define AIRPLANE_H
#include "AirVehicle.h"

//Sub-Class Airplane
class Airplane:public AirVehicle{
    protected:
        int numPassengers;
    public:
        Airplane();                       
        Airplane(int w, int p);           // Create Airplane with weight w and passengers p

        void reducePassengers(int x);     // reduce passenger list by x
        void fly(int headwind, int minutes);  

        int get_numPassengers(){return numPassengers;}
};

#endif