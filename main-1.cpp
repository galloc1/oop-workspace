#include "Cell.h"
#include "Effect.h"
#include "Utils.h"

#include <iostream>
#include <random>
#include <tuple>

int main()
{
    srand(time(0));

    Cell cell(10, 20, 'C');
    std::cout << std::get<0>(cell.getPos()) << std::endl;

    std::tuple<int, int> newPos = Utils::generateRandomPos(100, 100);

    cell.setPos(std::get<0>(newPos), std::get<1>(newPos));
    std::cout << std::get<0>(cell.getPos()) << std::endl;

    return 0;
}