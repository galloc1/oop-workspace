#include "Cell.h"
#include "Effect.h"
#include "Utils.h"
#include "Trap.h"
#include "Character.h"
#include "Game.h"

#include <iostream>
#include <random>
#include <tuple>

int main()
{
    srand(time(0));

    Game game;

    game.initGame(10, 10, 100, 100);
    game.gameLoop(15, 3);

    return 0;
}