#ifndef EXPLOSION_H
#define EXPLOSION_H

#include <tuple>

#include "GameEntity.h"
#include "Effect.h"

class Explosion : public GameEntity, public Effect
{
private:
    /* data */
public:
    Explosion(int x, int y);
    ~Explosion();

    void apply(GameEntity &entity);
};

Explosion::Explosion(int x, int y) : GameEntity(x, y, 'E')
{
}

Explosion::~Explosion()
{
}

void Explosion::apply(GameEntity& entity)
{
    entity.setPos(-1, -1);
    entity.setType('X');
}

#endif