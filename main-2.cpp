#include "Explosion.h"
#include "Mine.h"
#include "Ship.h"
#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"

int main(){
    Ship ship(5, 10);
    ship.move(5, 5);

    Mine mine(10, 10);
    mine.explode();

    Explosion explosion(5, 10);
    explosion.apply(ship);

    return 0;
}