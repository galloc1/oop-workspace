#ifndef CHARACTER_H
#define CHARACTER_H

#include "Cell.h"

#include <tuple>

class Character : public Cell
{
private:
    /* data */
public:
    Character(int x, int y);
    ~Character();

    void move(int dx, int dy);
};

Character::Character(int x, int y) : Cell(x, y, 'C')
{
}

Character::~Character()
{
}

void Character::move(int dx, int dy){
    setPos(std::get<0>(getPos())+dx, std::get<1>(getPos())+dy);
}

#endif