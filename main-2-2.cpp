#include <iostream>
#include "TV.h"

using namespace std;

int main(){
    TV tv(50, 100);

    cout<<tv.getPowerConsumption();

    return 0;
}