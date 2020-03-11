
//Printing Paths in Dijkstra’s Shortest Path Algorithm
#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
#define V 9


void printpath(int parent[],int i)
{
    if(parent[i]==-1)
    {
        return;
    }
    printpath(parent,parent[i]);
    cout<<parent[i]<<" ";
}
int findmin(int fdis[],bool vis[])
{
    int min=INT_MAX;
    int min_index;
    for(int i=0;i<V;i++)
    {
        if(fdis[i]<min && vis[i]==0)
        {
            min=fdis[i];
            min_index=i;
        }
    }
    return min_index;
}
void dijkstra(int graph[][V],int src)
{

    bool vis[V];
    int fdis[V];
    int parent[V];
    for (int i = 0; i < V; i++)
    {
        vis[i]=0;
        fdis[i]=INT_MAX;
        parent[i]=-1;
    }

    fdis[src]=0;
    parent[src]=-1;
    for(int i=0;i<V-1;i++)
    {
        int u=findmin(fdis,vis);
        vis[u]=1;
        for(int j=0;j<V;j++)
        {
            if(graph[u][j] && !vis[j] && fdis[u]+graph[u][j]<fdis[j])
            {
                fdis[j]=fdis[u]+graph[u][j];
                parent[j]=u;
            }
        }
    }
    for(int i=0;i<V;i++)
    {
        cout<<"Source :"<<src<<"  Destination :"<<i<<"  Distance :"<<fdis[i]<<"  Path :";
        printpath(parent,i);
        cout<<"\n";
    }
}
int main()
{
    //  Let us create the example
    // graph discussed above
    int graph[V][V] = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
                       {4, 0, 8, 0, 0, 0, 0, 11, 0},
                        {0, 8, 0, 7, 0, 4, 0, 0, 2},
                        {0, 0, 7, 0, 9, 14, 0, 0, 0},
                        {0, 0, 0, 9, 0, 10, 0, 0, 0},
                        {0, 0, 4, 0, 10, 0, 2, 0, 0},
                        {0, 0, 0, 14, 0, 2, 0, 1, 6},
                        {8, 11, 0, 0, 0, 0, 1, 0, 7},
                        {0, 0, 2, 0, 0, 0, 6, 7, 0}
                    };

    dijkstra(graph, 0);
    return 0;
}
