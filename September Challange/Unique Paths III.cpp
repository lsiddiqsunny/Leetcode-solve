class Solution
{
public:
    int dir[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    int dfs(vector<vector<int>> &grid, int i, int j, int ex, int ey,
            int empty)
    {
        if (i >= grid.size() || i < 0 || j >= grid[0].size() || j < 0 || grid[i][j] == -1)
            return 0;
        if (grid[i][j] == 2)
        {
            return empty == -1;
        }
        int x = 0;
        empty--;
        grid[i][j] = -1;
        for (int k = 0; k < 4; k++)
        {
            int nx = i + dir[k][0];
            int ny = j + dir[k][1];
            x += dfs(grid, nx, ny, ex, ey, empty);
        }
        empty++;
        grid[i][j] = 0;
        return x;
    }
    int uniquePathsIII(vector<vector<int>> &grid)
    {
        int empty = 0;
        int sx, sy, ex, ey;
        int n = grid.size();
        int m = grid[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 0)
                    empty++;
                else if (grid[i][j] == 1)
                {
                    sx = i;
                    sy = j;
                }
                else if (grid[i][j] == 2)
                {
                    ex = i;
                    ey = j;
                }
            }
        }
        return dfs(grid, sx, sy, ex, ey, empty);
    }
};