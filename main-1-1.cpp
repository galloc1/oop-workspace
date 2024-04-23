#include "Appliance.h"
#include <iostream>

using namespace std;

int main(){
    Appliance appliance(10);

    cout << appliance.getPowerConsumption() << endl;

    return 0;
}