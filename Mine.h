#ifndef MINE_H
#define MINE_H

#include <tuple>

#include "GameEntity.h"
#include "Explosion.h"

class Mine : public GameEntity
{
private:
    /* data */
public:
    Mine(int x, int y);
    ~Mine();

    Explosion explode();
};

Mine::Mine(int x, int y) : GameEntity(x, y, 'M')
{
}

Mine::~Mine()
{
}

Explosion Mine::explode()
{
    Explosion explosion(std::get<0>(position), std::get<1>(position));
    this->type = 'X';
    return explosion;
}

#endif