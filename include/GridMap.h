#ifndef GRIDMAP_H
#define GRIDMAP_H

#include <vector>
#include <string>

class GridMap
{
private:
    std::vector<std::vector<char>> grid;
    int rows;
    int cols;

public:
    GridMap();

    bool loadFromFile(const std::string& filename);
    void display() const;

    int getRows() const;
    int getCols() const;
};

#endif