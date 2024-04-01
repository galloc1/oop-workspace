#ifndef WIZARD_H
#define WIZARD_H
#include "player.h"

using namespace std;

class Wizard : public Player{
    private:
        int mana;
    public:
        Wizard(string name, int health, int damage, int mana) : mana(mana), Player(name, health, damage) {}
        void castSpell(Player* opponent);

        int getMana(){return mana;}

        void setMana(int mana){this->mana = mana;}
};

#endif