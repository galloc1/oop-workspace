#include "Explosion.h"
#include "Mine.h"
#include "Ship.h"
#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"
#include "Game.h"

int main(){
    Game game;

    game.initGame(10, 5, 50, 50);

    game.gameLoop(15, 5);

    return 0;
}