// C++ program to print DFS traversal for a given given graph
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
    void DFS();  // prints all vertices in DFS manner

    // prints all not yet visited vertices reachable from s
    void DFSUtil(int s,bool visited[]);
};
void Graph::DFSUtil(int source,bool visited[])
{
    stack<int> s;
    int top;
    s.push(source);
    while(!s.empty())
    {
        top=s.top();
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

void Graph::DFS()
{
    bool visited[v]={0};
    for(int i=0;i<v;i++)
    {
        if(!visited[i])
        {
            DFSUtil(i,visited);
        }
    }
}
int main()
{
    Graph g(5); // Total 5 vertices in graph
    g.addEdge(1, 0);
    g.addEdge(0, 2);
    g.addEdge(2, 1);
    g.addEdge(0, 3);
    g.addEdge(1, 4);


    cout << "Following is Depth First Traversal\n";
    g.DFS();

    return 0;
}
