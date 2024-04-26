#include "AirFleet.h"
#include "AirVehicle.h"
#include <iostream>

using namespace std;

int main(){
    AirFleet airFleet;
    AirVehicle* fleet = airFleet.get_fleet()[0];
    cout << fleet->get_fuel();

    return 0;
}