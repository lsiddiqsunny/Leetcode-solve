class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        if(grid.size()==0||grid[0].size()==0) return 0;
        int f[grid.size()][grid[0].size()];
        f[0][0]=grid[0][0];
        for(int i=1;i<grid.size();i++) f[i][0]=f[i-1][0]+grid[i][0];
        for(int j=1;j<grid[0].size();j++) f[0][j]=f[0][j-1]+grid[0][j];
        for(int i=1;i<grid.size();i++)
            for(int j=1;j<grid[0].size();j++)
                f[i][j]=min(f[i-1][j],f[i][j-1])+grid[i][j];
        return f[grid.size()-1][grid[0].size()-1];
    }
};