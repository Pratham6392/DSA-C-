#include <iostream>
using namespace std;
// dfs traversal of a graph

void dfs(int node, vector<int> &vis, vector<int> adj[], vector<int> &storedfs)
{
    storedfs.push_back(node);
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, vis, adj, storedfs);
        }
    }
}