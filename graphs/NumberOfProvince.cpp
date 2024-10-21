#include <iostream>
using namespace std;
int numberOfProvinces(vector<vector<int>> adj, int V)
{
    vector<int> adjs[V];

    for (int i = 0; i < adj.size(); i++)
    {
        for (int j = 0; j < adj[i].size(); j++)
        {
            if (adj[i][j] == 1 && i != j)
            {
                adjs[i].push_back(j);
                adjs[j].push_back(i);
            };
        }
    }
    int vis[V] = {0};
    for (int i = 0; i < V; i++)
    {
        if (vis[i] == 0)
        {
            dfs(i, vis, adjs);
            count++;
        }
    }

    return count;
}