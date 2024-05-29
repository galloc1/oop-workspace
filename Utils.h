#ifndef UTILS_H
#define UTILS_H

#include <tuple>
#include <random>


class Utils
{
private:
    /* data */
public:
    Utils(/* args */);
    ~Utils();

    static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight);
    static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2);
};

Utils::Utils(/* args */)
{
}

Utils::~Utils()
{
}

std::tuple<int, int> Utils::generateRandomPos(int gridWidth, int gridHeight)
{
    int x = std::rand() % gridWidth;
    int y = std::rand() % gridHeight;
    return std::make_tuple(x, y);
}

double Utils::calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2){
    return sqrt(pow(std::get<0>(pos2) - std::get<0>(pos1), 2) + pow(std::get<1>(pos2) - std::get<1>(pos1), 2));
}

#endif