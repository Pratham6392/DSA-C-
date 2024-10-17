#include <iostream>
using namespace std;

// bfs traversal of a graph

vector<int> bfsOfGraph(int V, vector<int> adj[])
{
    int vis[V] = {0};
    vis[0] = 1;
    vector<int> bfs;
    queue<int> q;
    q.push(0);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                q.push(it);
                vis[it] = 1;
            }
        }
    }
    return bfs;
}