class Solution {
public:
    vector<int> grad = {0,1,0,-1,0};
    bool dfs(int r,int c,vector<vector<char>> &grid,int pr,int pc,vector<vector<int>> &vis) {
        
        vis[r][c] = 1;
        
        for(int k=0;k<4;k++) {
            int nr = r + grad[k];
            int nc = c + grad[k+1];
            
            if(nr < 0 or nr >= grid.size() or nc < 0 or nc >= grid[0].size()) continue;
            if(grid[nr][nc] != grid[r][c] or (nr == pr and nc == pc)) continue;
            
            if(vis[nr][nc] == 1) return true;
            
            if(dfs(nr,nc,grid,r,c,vis)) return true;
        }
        
        return false;
    }
    bool containsCycle(vector<vector<char>>& grid) {
        vector<vector<int>> vis(grid.size(),vector<int>(grid[0].size(),0));

        
        for(int i=0;i<grid.size();i++) {
            for(int j=0;j<grid[0].size();j++) {
                if(vis[i][j] == 0)
                    if(dfs(i,j,grid,-1,-1,vis)) return true;
            }
        }
        
        return false;
    }
};