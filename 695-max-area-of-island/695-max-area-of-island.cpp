class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxArea = 0;
        
        for(int i=0;i<grid.size();i++) {
            for(int j=0;j<grid[0].size();j++) {
                
                if(grid[i][j] == 1) {
                    int localArea = 0;
                    dfs(i,j,grid,localArea);
                
                    maxArea = max(maxArea,localArea);
                }
                
            }
        }
        
        return maxArea;
    }
    
    void dfs(int i,int j,vector<vector<int>> &grid,int &localArea) {
        
        if(i<0 or j<0 or i>=grid.size() or j>=grid[0].size() or grid[i][j] == 0) return;
        
        localArea++;
        grid[i][j] = 0;
        dfs(i+1,j,grid,localArea);
        dfs(i-1,j,grid,localArea);
        dfs(i,j+1,grid,localArea);
        dfs(i,j-1,grid,localArea);
        
    }
    
};