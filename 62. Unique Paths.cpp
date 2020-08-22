class Solution {
public:
    int uniquePaths(int m, int n) {
        int path[m+1][n+1];
        for(int i=1;i<=n;i++){
            path[1][i]=1;
        }
        for(int i=1;i<=m;i++){
            path[i][1]=1;
        }
        
        for(int i=2;i<=m;i++){
            for(int j=2;j<=n;j++){
                path[i][j]=path[i-1][j]+path[i][j-1];
            }
        }
        return path[m][n];
        
    }
};