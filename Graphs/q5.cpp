//minimum cost in a maze
// Given a cost matrix cost[][] and a position (m, n) in cost[][], write a function that returns cost
// of minimum cost path to reach (m, n) from (0, 0). Each cell of the matrix represents a cost to traverse through that cell.
// Total cost of a path to reach (m, n) is sum of all the costs on that path (including both source and destination).
// You can only traverse down, right and diagonally lower cells from a given cell, i.e., from a given cell
// (i, j), cells (i+1, j), (i, j+1) and (i+1, j+1) can be traversed. You may assume that all costs are positive integers.

#include <stdio.h>
#include<bits/stdc++.h>
#define R 3
#define C 3
using namespace std;


int minCost(int cost[R][C],int x,int y)
{
    int mcost[R][C];
    mcost[0][0]=cost[0][0];
    for(int i=1;i<R;i++)
    {
        mcost[i][0]=mcost[i-1][0]+cost[i][0];
    }
    for(int i=1;i<C;i++)
    {
        mcost[0][i]=mcost[0][i-1]+cost[0][i];
    }
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=y;j++)
        {
            mcost[i][j]=min(mcost[i-1][j],min(mcost[i][j-1],mcost[i-1][j-1]))+cost[i][j];
        }
    }
    return mcost[x][y];
}

int main()
{
   int cost[R][C] = { {1, 2, 3},
                      {4, 8, 2},
                      {1, 5, 3} };
   printf(" %d ", minCost(cost, 2, 2));
   return 0;
}
