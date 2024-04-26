#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

//Base Class AirVehicle
class AirVehicle{
    protected:
        int weight;     // the weight of AirVehicle
        int numberOfFlights;    // initially 0, self explanatory

        float fuel;     // fuel percentage, initially 100%
    public:
        //Constructors
        AirVehicle();   // Sets all parameters to 0 (or type equivalent)
        AirVehicle(int w);   //Creates an AirVehicle with weight w

        //Getters
        int get_weight() {return weight;}
        int get_numberOfFlights() {return numberOfFlights;}

        float get_fuel() {return fuel;}

        //Setters
        void set_weight(int weight) {this->weight = weight;}
        void set_numberOfFlights(int numberOfFlights) {this->numberOfFlights = numberOfFlights;}

        void set_fuel(float fuel) {this->fuel = fuel;}

        //Methods
        void refuel();  // Resets fuel back to 100%
        virtual void fly(int headwind, int minutes);    // Headwind in km/h and minutes (time flying)
};

#endif