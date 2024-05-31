#ifndef CELL_H
#define CELL_H

#include <tuple>

class Cell
{
private:
    std::tuple<int, int> position;
    char type;
public:
    Cell(int x, int y, char type);
    ~Cell();

    std::tuple<int, int> getPos();
    char getType();

    void setPos(int x, int y);
    void setType(char type);
};

Cell::Cell(int x, int y, char type)
{
    this->position = std::make_tuple(x, y);
    this->type = type;
}

Cell::~Cell()
{
}

std::tuple<int, int> Cell::getPos()
{
    return this->position;
}

char Cell::getType()
{
    return this->type;
}

void Cell::setPos(int x, int y)
{
    this->position = std::make_tuple(x, y);
}

void Cell::setType(char type)
{
    this->type = type;
}

#endif