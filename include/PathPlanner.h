#ifndef PATHPLANNER_H
#define PATHPLANNER_H

#include "GridMap.h"
#include <vector>

struct Node
{
    int r;
    int c;
};

class PathPlanner
{
public:
    std::vector<Node> findPath(const GridMap& map);
};

#endif