#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <tuple>

class GameEntity
{
protected:
    std::tuple<int, int> position;
    char type;
public:
    GameEntity(int x, int y, char type);
    ~GameEntity();

    std::tuple<int, int> getPos();
    char getType();

    void setPos(int x, int y);
    void setPos(std::tuple<int, int> pos);
    void setType(char type);
};

GameEntity::GameEntity(int x, int y, char type)
{
    this->position = std::make_tuple(x, y);
    this->type = type;
}

GameEntity::~GameEntity()
{
}

std::tuple<int, int> GameEntity::getPos()
{
    return this->position;
}

char GameEntity::getType()
{
    return type;
}

void GameEntity::setPos(int x, int y)
{
    this->position = std::make_tuple(x, y);
}

void GameEntity::setPos(std::tuple<int, int> pos)
{
    this->position = pos;
}

void GameEntity::setType(char type)
{
    this->type = type;
}

#endif