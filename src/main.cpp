#include <iostream>
#include "GridMap.h"

int main()
{
    GridMap map;

    if (map.loadFromFile("../data/maps/simple_map.txt"))
    {
        std::cout << "Map Loaded:\n";
        map.display();
    }
    else
    {
        std::cout << "Failed to load map.\n";
    }

    return 0;
}