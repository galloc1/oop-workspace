#ifndef EFFECT_H
#define EFFECT_H

#include "GameEntity.h"

class Effect
{
private:
    /* data */
public:
    /*Effect();
    ~Effect();*/

    virtual void apply(GameEntity& entity);
};

/*Effect::Effect()
{
}

Effect::~Effect()
{
}*/

void Effect::apply(GameEntity& entity)
{
}


#endif