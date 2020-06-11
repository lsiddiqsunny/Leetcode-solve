class Solution {
public:
    void traverseIsland( int x, int y, vector<vector<char>>& grid ){
        if ( x < 0 || x > grid.size()-1 || y < 0 || y > grid[0].size()-1 || grid[x][y] != '1'){
            return;
        }else{
            grid[x][y] = '2';
        }
        traverseIsland(x+1,y,grid);
        traverseIsland(x,y+1,grid);
        traverseIsland(x-1,y,grid);
        traverseIsland(x,y-1,grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        int islandCount = 0;
        for ( int x = 0; x < grid.size(); ++x ){
            for( int y = 0; y < grid[0].size(); ++y ){
                if ( grid[x][y] == '1'){
                    traverseIsland(x,y,grid); //visit the whole island
                    islandCount++;
                }
            }
        }
        return islandCount;
    }
};