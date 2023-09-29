class Solution {
public:
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};

    bool isSafe(int x, int y, vector<vector<bool>>& vis, vector<vector<int>>& grid) 
    {
        int n = grid.size();
        int m = grid[0].size();
        return (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == 1 && !vis[x][y]);
    }
    void dfs(int i, int j, vector<vector<bool>>& vis, vector<vector<int>>& grid)
    {
        vis[i][j] = true;
        for (int k = 0; k < 4; k++) 
        {
            int x = i + dx[k];
            int y = j + dy[k];
            
            if (isSafe(x, y, vis, grid)) 
            {
                dfs(x, y, vis, grid);
            }
        }
    }
    int numberOfEnclaves(vector<vector<int>>& grid) 
    {
        int ans = 0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));

        for (int i = 0; i < n; i++) 
        {
            if (grid[i][0] == 1 && !vis[i][0]) 
            {
                dfs(i, 0, vis, grid);
            }
            if (grid[i][m - 1] == 1 && !vis[i][m - 1])
            {
                dfs(i, m - 1, vis, grid);
            }
        }

        for (int j = 0; j < m; j++)
        {
            if (grid[0][j] == 1 && !vis[0][j])
            {
                dfs(0, j, vis, grid);
            }
            if (grid[n - 1][j] == 1 && !vis[n - 1][j])
            {
                dfs(n - 1, j, vis, grid);
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 1 && !vis[i][j])
                {
                    ans++;
                }
            }
        }

        return ans;
    }
};
