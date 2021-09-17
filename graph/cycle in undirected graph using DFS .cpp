#include <bits/stdc++.h>
using namespace std;
void add_edge(vector<int> adj[], int src, int dest)
{
    adj[src].push_back(dest);
    adj[dest].push_back(src);
}

bool is_cycle(vector<int> adj[], vector<int> &visited, vector<int> &parent, int start)
{
    visited[start] = 1;
    vector<int>::iterator itr;
    for (itr = adj[start].begin(); itr != adj[start].end(); itr++)
    {
        if (visited[*itr] == 0)
        {
            parent[*itr] = start;
            if (is_cycle(adj, visited, parent, *itr))
            {
                return true;
            }
        }
        else if (parent[start] != *itr)
        {
            return true;
        }
    }
    return false;
}

//DRIVER FUNCTION//
int main()
{
    int v, e;
    cout << "Enter Number of vertices and Edges: ";
    cin >> v >> e;
    int src, dest;
    vector<int> adj[v];
    cout << "Enter Source and Destination of Edges: " << endl;

    for (int i = 0; i < e; i++)
    {
        cin >> src >> dest;
        add_edge(adj, src, dest);
    }
    vector<int> visited(v, 0);
    vector<int> parent(v, -1);
    int flag = 0;
    for (int i = 0; i < v; i++)
    {
        if (visited[i] == 0)
        {
            if (is_cycle(adj, visited, parent, i))
            {
                cout << "Graph Contain Cycle!" << endl;
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
    {
        cout << "Graph Cannot contain any cycle" << endl;
    }
    return 0;
}
