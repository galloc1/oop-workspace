#include "Fridge.h"
#include <iostream>

using namespace std;

int main(){
    Fridge fridge(50, 100);

    cout<<fridge.getPowerConsumption();

    return 0;
}