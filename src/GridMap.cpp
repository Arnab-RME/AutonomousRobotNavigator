#include "GridMap.h"
#include <iostream>
#include <fstream>

GridMap::GridMap()
{
    rows = 0;
    cols = 0;
}

bool GridMap::loadFromFile(const std::string& filename)
{
    std::ifstream file(filename);

    if (!file.is_open())
    {
        std::cout << "Failed to open map file\n";
        return false;
    }

    grid.clear();

    std::string line;

    while (std::getline(file, line))
    {
        std::vector<char> row;

        for (char c : line)
        {
            if (c != ' ')
                row.push_back(c);
        }

        grid.push_back(row);
    }

    rows = grid.size();
    cols = grid[0].size();

    return true;
}

void GridMap::display() const
{
    for (const auto& row : grid)
    {
        for (char c : row)
        {
            std::cout << c << " ";
        }
        std::cout << std::endl;
    }
}

int GridMap::getRows() const
{
    return rows;
}

int GridMap::getCols() const
{
    return cols;
}