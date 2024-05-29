#ifndef GAME_H
#define GAME_H

#include <vector>

#include "GameEntity.h"
#include "Ship.h"
#include "Mine.h"
#include "Utils.h"

class Game
{
private:
    std::vector<GameEntity*> entities;

public:
    Game(/* args */);
    ~Game();

    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight);

    void gameLoop(int maxIterations, double mineDistanceThreshold);

    std::vector<GameEntity*> getEntities();

    void setEntities(std::vector<GameEntity*> entities);
};

Game::Game(/* args */)
{
}

Game::~Game()
{
}

std::vector<GameEntity*> Game::initGame(int numShips, int numMines, int gridWidth, int gridHeight)
{
    for(int i=0; i<numShips; i++){
        Ship* ship = new Ship(0, 0);
        ship->setPos(Utils::generateRandomPos(gridWidth, gridHeight));
        entities.push_back(ship);
    }

    for(int i=0; i<numMines; i++){
        Mine* mine = new Mine(0, 0);
        mine->setPos(Utils::generateRandomPos(gridWidth, gridHeight));
        entities.push_back(mine);
    }

    return entities;
}

void Game::gameLoop(int maxIterations, double mineDistanceThreshold)
{
    int iteration = 0;
    bool finished = false;
    while(iteration<maxIterations && finished == false){
        finished = true;
        iteration++;

        for(int i=0; i<entities.size(); i++){
            if(entities[i]->getType() == 'S'){
                finished = false;

                Ship* ship = static_cast<Ship*>(entities[i]);
                ship->move(1, 0);

                for(int j=0; j<entities.size(); j++){

                    if(entities[j]->getType() == 'M'){

                        if(Utils::calculateDistance(entities[j]->getPos(), ship->getPos())){
                            Mine* mine = static_cast<Mine*>(entities[j]);
                            Explosion explosion = mine->explode();
                            explosion.apply(*ship);
                        }
                    }
                }
            }
        }
    }
}

std::vector<GameEntity*> Game::getEntities()
{
    return entities;
}

void Game::setEntities(std::vector<GameEntity*> entities)
{
    for(int i=0; i<this->entities.size(); i++){
        delete this->entities[i];
    }
    this->entities.clear();

    this->entities = entities;
}


#endif