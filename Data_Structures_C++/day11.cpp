#include <iostream>
#include <vector>
using namespace std;
class GraphList
{
private:
    int vertices;
    vector<vector<int>> adj;

public:
    GraphList(int V)
    {
        vertices = V;
        adj.resize(V); // create V empty lists
    }
    // Add edge (undirected)
    void addEdge(int u, int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    void display()
    {
        cout << "Hello" << endl;
        cout << "Adjacency List:\n";
        for (int i = 0; i < vertices; i++)
        {
            cout << i << " -> ";
            for (int node : adj[i])
                cout << node << " ";
            cout << endl;
        }
    }
};

int main(int argc, char const *argv[])
{
    GraphList g1(5);

    g1.addEdge(0, 1);
    g1.addEdge(1, 2);
    g1.addEdge(2, 3);
    g1.addEdge(3, 4);

    g1.display();

    return 0;
}
