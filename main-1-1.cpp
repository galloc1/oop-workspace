#include <iostream>
#include "Truck.h"

using namespace std;

int main(){
    Truck truck;
    Truck truck2(3, "Honda");

    cout<<truck.get_brand_code()<<" "<<truck.get_brand_name()<<endl;
    cout<<truck2.get_brand_code()<<" "<<truck2.get_brand_name()<<endl;

    return 0;
}