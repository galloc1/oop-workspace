#include <iostream>
#include "Truck.h"
#include "Truck_yard.h"

using namespace std;

int main(){
    Truck_yard truck_yard;
    cout << truck_yard.get_total_stock_count()<<endl;
    cout<<truck_yard.get_stock_count(0)<<endl;
    Truck* trucks = truck_yard.get_current_stock_list();
    for(int i=0; i<truck_yard.get_total_stock_count(); i++){
        cout<<trucks[i].get_brand_code();
    }
    delete[] trucks;
    Truck truck;
    cout<<truck_yard.addStock(truck);
    return 0;
}