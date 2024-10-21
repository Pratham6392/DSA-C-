#include <iostream>
using namespace std;

bool cycle(int node, int vis[], vector<int> adj)
{
    vis[node] = 1;
    queue<pair<int, int>> q;
    q.push({node, -1});
    while (!q.empty())
    {
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                q.push({it, node});
                vis[it] = 1;
            }
            else if (parent != it)
            {
                return true;
            }
        }
    }
}