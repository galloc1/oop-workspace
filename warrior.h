#ifndef WARRIOR_H
#define WARRIOR_H
#include <string>
#include "player.h"

using namespace std;

class Warrior : public Player{
    private:
        string weapon;
    public:
        Warrior(string name, int health, int damage, string weapon) : weapon(weapon), Player(name, health, damage) {}
        void swingWeapon(Player* opponent);

        string getWeapon(){return weapon;}

        void setWeapon(string weapon){this->weapon = weapon;}
};


#endif