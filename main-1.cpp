#include <tuple>
#include <iostream>

#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"

int main(){
    std::srand(time(0));

    std::tuple<int, int> pos1 = Utils::generateRandomPos(127, 127);
    std::tuple<int, int> pos2 = Utils::generateRandomPos(127, 127);

    std::cout << std::to_string(Utils::calculateDistance(pos1, pos2));

    return 0;
}