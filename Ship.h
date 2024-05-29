#ifndef SHIP_H
#define SHIP_H

#include "GameEntity.h"

class Ship : public GameEntity
{
private:
    /* data */
public:
    Ship(int x, int y);
    ~Ship();

    void move(int dx, int dy);
};

Ship::Ship(int x, int y) : GameEntity(x, y, 'S')
{

}

Ship::~Ship()
{
}

void Ship::move(int dx, int dy)
{
    this->setPos(std::get<0>(this->position)+dx, std::get<1>(this->position)+dy);
}

#endif