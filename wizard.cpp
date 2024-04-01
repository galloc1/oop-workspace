#include <iostream>
#include "wizard.h"

using namespace std;

void Wizard::castSpell(Player* opponent){
    cout << name << " casts a spell on " << opponent->getName() << " for " << mana << " damage.\n";
    attack(opponent, mana);
}