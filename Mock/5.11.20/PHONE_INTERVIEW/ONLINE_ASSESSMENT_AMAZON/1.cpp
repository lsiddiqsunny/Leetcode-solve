/*
In a given grid, each cell can have one of three values:

the value 0 representing an empty cell;
the value 1 representing a fresh orange;
the value 2 representing a rotten orange.
Every minute, any fresh orange that is adjacent (4-directionally) to a rotten orange becomes rotten.

Return the minimum number of minutes that must elapse until no cell has a fresh orange.  If this is impossible, return -1 instead.

 

Example 1:



Input: [[2,1,1],[1,1,0],[0,1,1]]
Output: 4
Example 2:

Input: [[2,1,1],[0,1,1],[1,0,1]]
Output: -1
Explanation:  The orange in the bottom left corner (row 2, column 0) is never rotten, because rotting only happens 4-directionally.
Example 3:

Input: [[0,2]]
Output: 0
Explanation:  Since there are already no fresh oranges at minute 0, the answer is just 0.
 

Note:

1 <= grid.length <= 10
1 <= grid[0].length <= 10
grid[i][j] is only 0, 1, or 2.
*/
class Solution {
public:
    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    int orangesRotting(vector<vector<int>>& grid) {

        set<pair<int,int> > source,visited;
        int one=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==2){
                    source.insert({i,j});
                }
                else if(grid[i][j]==1){
                    one++;
                }
                
            }
        }
        if(source.size()==0){
            return one==0?0:-1;
        }
        visited = source;
        int co=-1;
        while(source.size()!=0){
            co++;
            set<pair<int,int> > newsource;
            for(pair<int,int> p:source){
                cout<<p.first<<" "<<p.second<<endl;
            for(int i=0;i<4;i++){
                    int x= p.first+dx[i];
                    int y= p.second+dy[i];
                    if(x>=0 and x<grid.size() and y>=0 and y<grid[0].size()){
                    if(grid[x][y]==1 and visited.find({x,y})==visited.end()){
                        grid[x][y]=2;
                        newsource.insert({x,y});
                        visited.insert({x,y});
                    }
                    
                }
            }
            }
            
            source=newsource;
            cout<<endl;
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
        return co;
        
        
    }
};