// C++ program to print BFS traversal for a given given graph
# include <bits/stdc++.h>
using namespace std;
class Graph
{
    int v;
    list<int> *l;
    public:
    Graph(int V)
    {
        this->v=V;
        l=new list<int>[V];
    }
    void addEdge(int a,int b)
    {
        l[a].push_back(b);
    }
    void BFS(int start);  // prints all vertices in DFS manner

    // prints all not yet visited vertices reachable from s
    void BFSUtil(int s,bool visited[]);
};
void Graph::BFSUtil(int source,bool visited[])
{
    queue<int> s;
    int top;
    s.push(source);
    while(!s.empty())
    {
        top=s.front();
        s.pop();
        if(!visited[top])
        {
            cout << top << " ";
            visited[top] = true;
            for(auto i:l[top])
            {
                if(!visited[i])
                 {
                     s.push(i);
                 }
            }
        }
    }
}

void Graph::BFS(int start)
{
    bool visited[v]={0};
    BFSUtil(start,visited);
    for(int i=0;i<v;i++)
    {
        if(!visited[i])
        {
            BFSUtil(i,visited);
        }
    }
}
int main()
{
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.BFS(2);

    return 0;
}
