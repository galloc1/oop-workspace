#ifndef TRAP_H
#define TRAP_H

#include "Cell.h"
#include "Effect.h"

class Trap : public Cell, public Effect
{
private:
    bool active;
public:
    Trap(int x, int y);
    ~Trap();

    bool isActive();
    void apply(Cell& cell);
};

Trap::Trap(int x, int y) : Cell(x, y, 'T'), active(true) {}

Trap::~Trap()
{
}

bool Trap::isActive()
{
    return active;
}

void Trap::apply(Cell& cell)
{
    cell.setType('T');
    this->active = false;
}


#endif