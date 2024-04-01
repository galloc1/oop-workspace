#include <iostream>
#include "player.h"

using namespace std;

void Player::attack(Player* opponent, int damage){
    opponent->takeDamage(damage);
}

void Player::takeDamage(int damage){
    this->health -= damage;
    cout << name << " takes " << damage << " damage. Remaining health: " << health << "\n";
}