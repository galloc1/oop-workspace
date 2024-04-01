#ifndef PLAYER_H
#define PLAYER_H
#include <string>

using namespace std;

class Player{
    protected:
        string name;
        int health;
        int damage;
    public:
        Player(string name, int health, int damage) : name(name), health(health), damage(damage){}
        void attack(Player* opponent, int damage);
        void takeDamage(int damage);

        string getName() {return name;}
        int getHealth() {return health;}
        int getDamage() {return damage;}

        void setName(string name) {this->name = name;}
        void setHealth(int health) {this->health = health;}
        void setDamage(int damage) {this->damage = damage;}
};

#endif