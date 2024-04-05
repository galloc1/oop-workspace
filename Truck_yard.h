#ifndef TRUCK_YARD_H
#define TRUCK_YARD_H
#include "Truck.h"

class Truck_yard
{
private:
    int capacity;
    int numTrucks;
    Truck* trucks;
public:
    Truck_yard() : capacity(0), numTrucks(0), trucks(new Truck[0]){}
    Truck_yard(int capacity) : capacity(capacity), numTrucks(0), trucks(new Truck[capacity]){}

    int get_total_stock_count(){return numTrucks;}
    int get_stock_count(int code);
    Truck* get_current_stock_list();

    bool addStock(Truck c); // tries to add a truck to yard. If there is enough space, return true
                            // and adds truck to the yard. Otherwise, do not save truck, and return false. 

    ~Truck_yard(){delete[] trucks;}
};

#endif