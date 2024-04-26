#ifndef HELICOPTER_H
#define HELICOPTER_H
#include "AirVehicle.h"
#include <string>

//Sub-Class Helicopter
class Helicopter:public AirVehicle{
    protected:
        std::string name;   // Name of the helicopter
    public:
        //Constructors
        Helicopter();   // Sets all parameters to 0 (or type equivalent)
        Helicopter(int w, std::string n);    // Creates a helicopter with weight w and name n

        //Getters
        std::string get_name(){return name;}

        //Setters
        void set_name(std::string name){this->name = name;}

        //Inherited Virtuals
        void fly(int headwind, int minutes);
};

#endif