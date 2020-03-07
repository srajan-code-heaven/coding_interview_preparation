
//Shortest path in a Binary Maze (Using application of Breadth First Search Algorithm)

#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

#define ROW 9
#define COL 10

struct Point{
    int x;
    int y;
};

int BFS(int mat[][COL],Point source,Point dest)
{
    int dis[ROW][COL];
    memset(dis,-1,sizeof(dis));
    dis[source.x][source.y]=0;
    queue<Point> q;
    q.push(source);
    while(!q.empty())
    {
        Point cur=q.front();
        q.pop();
        if(cur.x==dest.x && cur.y==dest.y)
        {
            return dis[cur.x][cur.y];
        }
        Point temp;
        int a=cur.x+1;
        int b=cur.y;
        if(mat[a][b]!=0 && dis[a][b]==-1)
        {
            temp.x=a;
            temp.y=b;
            q.push(temp);
            dis[a][b]=dis[cur.x][cur.y]+1;
        }
        a=cur.x-1;
        b=cur.y;
         if(mat[a][b]!=0 && dis[a][b]==-1)
        {
            temp.x=a;
            temp.y=b;
            q.push(temp);
            dis[a][b]=dis[cur.x][cur.y]+1;
        }
        a=cur.x;
        b=cur.y-1;
         if(mat[a][b]!=0 && dis[a][b]==-1)
        {
            temp.x=a;
            temp.y=b;
            q.push(temp);
            dis[a][b]=dis[cur.x][cur.y]+1;
        }
        a=cur.x;
        b=cur.y+1;
        if(mat[a][b]!=0 && dis[a][b]==-1)
        {
            temp.x=a;
            temp.y=b;
            q.push(temp);
            dis[a][b]=dis[cur.x][cur.y]+1;
        }
    }
    return -1;
}
int main()
{
    int mat[ROW][COL] =
    {
        { 1, 0, 1, 1, 1, 1, 0, 1, 1, 1 },
        { 1, 0, 1, 0, 1, 1, 1, 0, 1, 1 },
        { 1, 1, 1, 0, 1, 1, 0, 1, 0, 1 },
        { 0, 0, 0, 0, 1, 0, 0, 0, 0, 1 },
        { 1, 1, 1, 0, 1, 1, 1, 0, 1, 0 },
        { 1, 0, 1, 1, 1, 1, 0, 1, 0, 0 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
        { 1, 0, 1, 1, 1, 1, 0, 1, 1, 1 },
        { 1, 1, 0, 0, 0, 0, 1, 0, 0, 1 }
    };

    Point source = {0, 0};
    Point dest = {3, 4};

    int dist = BFS(mat, source, dest);

    if (dist != INT_MAX)
        cout << "Shortest Path is " << dist ;
    else
        cout << "Shortest Path doesn't exist";

    return 0;
}
