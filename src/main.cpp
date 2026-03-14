#include <iostream>
#include "GridMap.h"
#include "PathPlanner.h"

int main()
{
    GridMap map;

    if(!map.loadFromFile("../data/maps/simple_map.txt"))
    {
        std::cout<<"Failed to load map\n";
        return 0;
    }

    std::cout<<"Map:\n";
    map.display();

    PathPlanner planner;

    planner.findPath(map);

    return 0;
}