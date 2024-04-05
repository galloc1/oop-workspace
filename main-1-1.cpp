#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main(){
    int cars, buses, motorbikes;
    std::cout << "Number of cars: ";
    std::cin >> cars;
    std::cout<<"\nNumber of buses: ";
    std::cin>>buses;
    std::cout << "\nNumber of motorbikes: ";
    std::cin >> motorbikes;
    int a;
    Vehicle* vehicles[(cars+buses+motorbikes)];

    for(int i=0; i<cars; i++){
        vehicles[i] = new Car();
    }
    std::cin>>a;
    for(int i=cars; i<cars+buses; i++){
        vehicles[i] = new Bus();
    }
    std::cin>>a;
    for(int i=cars+buses; i<cars+buses+motorbikes; i++){
        vehicles[i] = new Motorbike();
    }
    std::cin>>a;

    for(int i=0; i<cars+buses+motorbikes; i++){
        std::cout<<vehicles[i]->getParkingDuration()<<std::endl;
    }

    return 0;
}