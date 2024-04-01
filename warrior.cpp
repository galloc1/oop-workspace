#include <iostream>
#include "warrior.h"

using namespace std;

void Warrior::swingWeapon(Player* opponent){
    cout << name << " swings their " << weapon << " at " << opponent->getName() << "!\n";
    attack(opponent, damage);
}