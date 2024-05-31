#ifndef EFFECT_H
#define EFFECT_H

#include "Cell.h"

class Effect
{
private:
    /* data */
public:
    virtual void apply(Cell& cell);
};

void Effect::apply(Cell& cell)
{
    
}


#endif