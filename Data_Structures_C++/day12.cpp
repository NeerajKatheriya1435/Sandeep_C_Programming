#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Graph
{
public:
    int vertices;
    vector<vector<int>> adj;
    Graph(int V)
    {
        vertices = V;
        adj.resize(V);
    }
    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u); // Undirected Graph
    }
    // BFS Traversal
    void BFS(int start)
    {
        vector<bool> visited(vertices, false);
        queue<int> q;
        visited[start] = true;
        q.push(start);
        cout << "BFS: ";
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            cout << node << " ";
            for (int neigh : adj[node])
            {
                if (!visited[neigh])
                {
                    visited[neigh] = true;
                    q.push(neigh);
                }
            }
        }
        cout << endl;
    }
    // Helper function for DFS
    void DFSUtil(int node, vector<bool> &visited)
    {
        visited[node] = true;
        cout << node << " ";
        for (int neigh : adj[node])
        {
            if (!visited[neigh])
                DFSUtil(neigh, visited);
        }
    }
    // DFS Traversal
    void DFS(int start)
    {
        vector<bool> visited(vertices, false);
        cout << "DFS: ";
        DFSUtil(start, visited);
        cout << endl;
    }
};
int main()
{
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 5);

    g.BFS(0);
    g.DFS(0);
    return 0;
}