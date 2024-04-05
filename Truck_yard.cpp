#include "Truck.h"
#include "Truck_yard.h"

int Truck_yard::get_stock_count(int code){
    int count = 0;
    for(int i=0; i<numTrucks; i++){
        if(trucks[i].get_brand_code()==code){
            count++;
        }
    }
    return count;
}

Truck* Truck_yard::get_current_stock_list(){
    Truck* newTrucks = new Truck[numTrucks];
    for(int i=0; i<numTrucks; i++){
        newTrucks[i] = trucks[i];
    }
    return newTrucks;
}

bool Truck_yard::addStock(Truck c){
    if(numTrucks<capacity){
        trucks[numTrucks] = c;
        numTrucks++;
        return true;
    }
    else{
        return false;
    }
}