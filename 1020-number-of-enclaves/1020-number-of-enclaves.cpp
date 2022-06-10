class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        
        int m = grid.size(),n = grid[0].size();
        
        for(int i=0;i<n;i++) {
            dfs(0,i,grid);
            dfs(m-1,i,grid);
        }
        
        for(int i=0;i<m;i++) {
            dfs(i,0,grid);
            dfs(i,n-1,grid);
        }
        
        int res = 0;
        
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(grid[i][j] == 1) res++;
            }
        }
        
        return res;
    }
    
    void dfs(int r,int c,vector<vector<int>> &grid) {
        if(r<0 or c<0 or r>= grid.size() or c>= grid[0].size() or grid[r][c] == 0) return;
        
        grid[r][c] = 0;
        
        int g[] = {0,1,0,-1,0};
        
        for(int k=0;k<4;k++) {
            dfs(r+g[k],c+g[k+1],grid);
        }
    }
};