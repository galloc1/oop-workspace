#include "Cell.h"
#include "Effect.h"
#include "Utils.h"
#include "Trap.h"
#include "Character.h"

#include <iostream>
#include <random>
#include <tuple>

int main()
{
    srand(time(0));

    Character character(15, 15);
    std::cout << std::get<0>(character.getPos()) << std::endl;

    std::tuple<int, int> newPos = Utils::generateRandomPos(100, 100);

    character.move(std::get<0>(newPos), std::get<1>(newPos));
    std::cout << std::get<0>(character.getPos()) << std::endl;

    Trap trap(15, 16);
    std::cout << trap.isActive() << std::endl;

    trap.apply(character);

    std::cout << trap.isActive() << std::endl;

    return 0;
}