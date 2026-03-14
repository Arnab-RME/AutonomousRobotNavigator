#include "PathPlanner.h"
#include <queue>
#include <iostream>

std::vector<Node> PathPlanner::findPath(const GridMap& map)
{
    int rows = map.getRows();
    int cols = map.getCols();

    std::vector<std::vector<bool>> visited(rows, std::vector<bool>(cols,false));

    std::queue<Node> q;

    Node start{-1,-1};
    Node goal{-1,-1};

    for(int r=0;r<rows;r++)
    {
        for(int c=0;c<cols;c++)
        {
            if(map.getCell(r,c)=='S')
                start={r,c};

            if(map.getCell(r,c)=='G')
                goal={r,c};
        }
    }

    q.push(start);
    visited[start.r][start.c]=true;

    int dr[4]={-1,1,0,0};
    int dc[4]={0,0,-1,1};

    while(!q.empty())
    {
        Node current=q.front();
        q.pop();

        if(current.r==goal.r && current.c==goal.c)
        {
            std::cout<<"Goal reached\n";
            break;
        }

        for(int i=0;i<4;i++)
        {
            int nr=current.r+dr[i];
            int nc=current.c+dc[i];

            if(map.isInside(nr,nc) &&
               !visited[nr][nc] &&
               map.getCell(nr,nc)!='#')
            {
                visited[nr][nc]=true;
                q.push({nr,nc});
            }
        }
    }

    return {};
}