#include <iostream>
using namespace std;

int timeToRottenOranges(vector<vector<int>> grid)
{
    int n = grid.size();
    int m = grid[0].size();
    queue<pair<pair<int, int>, int>> q;
    int vis[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            vis[i][j] = 0;
            if (grid[i][j] == 2)
            {
                q.push({{i, j}, 0});
                vis[i][j] = 1;
            }
        }
    }
    int t = 0;
    while (!q.empty())
    {
        int x = q.front().first.first;
        int y = q.front().first.second;
        int t = q.front().second;
        q.pop();
        if (x - 1 >= 0 && grid[x - 1][y] == 1 && !vis[x - 1][y])
        {
            q.push({{x - 1, y}, t + 1});
            vis[x - 1][y] = 1;
        }
        if (x + 1 < n && grid[x + 1][y] == 1 && !vis[x + 1][y])
        {
            q.push({{x + 1, y}, t + 1});
            vis[x + 1][y] = 1;
        }
        if (y - 1 >= 0 && grid[x][y - 1] == 1 && !vis[x][y - 1])
        {
            q.push({{x, y - 1}, t + 1});
            vis[x][y - 1] = 1;
        }
        if (y + 1 < m && grid[x][y + 1] == 1 && !vis[x][y + 1])
        {
            q.push({{x, y + 1}, t + 1});
            vis[x][y + 1] = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 1 && !vis[i][j])
            {
                return -1;
            }
        }
    }

    return t;
}