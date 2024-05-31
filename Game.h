#ifndef GAME_H
#define GAME_H

#include "Cell.h"
#include "Utils.h"
#include "Character.h"
#include "Trap.h"

#include <vector>
#include <tuple>
#include <iostream>

class Game
{
private:
    std::vector<Cell*> grid;

    int gridWidth;
    int gridHeight;
public:
    Game(/* args */);
    ~Game();

    std::vector<Cell*>& getGrid();
    void initGame(int numCharacters, int numTraps, int gridWidth, int gridHeight);
    void gameLoop(int maxIterations, double trapActivationDistance);
};

Game::Game(/* args */)
{
    gridWidth = 0;
    gridHeight = 0;
}

Game::~Game()
{
}

std::vector<Cell*>& Game::getGrid()
{
    return grid;
}

void Game::initGame(int numCharacters, int numTraps, int gridWidth, int gridHeight)
{
    this->gridWidth = gridWidth;
    this->gridHeight = gridHeight;

    for(int i=0; i<numCharacters; i++){
        std::tuple<int, int> pos = Utils::generateRandomPos(gridWidth, gridHeight);
        grid.push_back(new Character(std::get<0>(pos), std::get<1>(pos)));
    }

    for(int i=0; i<numTraps; i++){
        std::tuple<int, int> pos = Utils::generateRandomPos(gridWidth, gridHeight);
        grid.push_back(new Trap(std::get<0>(pos), std::get<1>(pos)));
    }
}

void Game::gameLoop(int maxIterations, double trapActivationDistance){
    for(int i=0; i<maxIterations; i++){
        for(int j=0; j<grid.size(); j++){
            if(grid[j]->getType() == 'C'){
                Character* character = static_cast<Character*>(grid[j]);
                character->move(1, 0);
                if(std::get<0>(character->getPos()) > gridWidth){
                    std::cout << "Character has won the game!";
                    return;
                }
                for(int k=0; k<grid.size(); k++){
                    if(grid[k]->getType() == 'T'){
                        if(Utils::calculateDistance(character->getPos(), grid[k]->getPos()) <= trapActivationDistance){
                            Trap* trap = static_cast<Trap*>(grid[k]);
                            trap->apply(*character);
                        }
                    }
                }
            }
        }
    }
    std::cout << "Maximum number of iterations reached. Game over.";
}


#endif