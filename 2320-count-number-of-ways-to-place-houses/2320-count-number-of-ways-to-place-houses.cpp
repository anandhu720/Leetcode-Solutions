class Solution {
public:
    int countHousePlacements(int n) {
        vector<vector<int>> grid(n+1,vector<int>(2,0));
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(2,-1)));
        return dfs(1,grid,dp);
    }
    
    int dfs(int r,vector<vector<int>> &grid,vector<vector<vector<int>>> &dp) {
        
        if(r == grid.size()) return 1;
        
        if(dp[r][grid[r-1][0]][grid[r-1][1]] != -1) return dp[r][grid[r-1][0]][grid[r-1][1]];
        
        int dpe=0,lpo=0,rpo=0,pb=0;
        
        dpe = dfs(r+1,grid,dp);  // dont place anything
        
        if(grid[r-1][0] != 1) {
            grid[r][0] = 1;
            lpo = dfs(r+1,grid,dp); // left place building
            grid[r][0] = 0;
        }
        
        if(grid[r-1][1] != 1) {
            grid[r][1] = 1;
            rpo = dfs(r+1,grid,dp);  // right place building
            grid[r][1] = 0;
        }
        
        if(grid[r-1][0] != 1 and grid[r-1][1] != 1) {
            grid[r][0] = grid[r][1] = 1;
            pb = dfs(r+1,grid,dp);  // both building place
            grid[r][0] = grid[r][1] = 0;
        }
        
        return dp[r][grid[r-1][0]][grid[r-1][1]] = ((dpe+lpo)%1000000007+(rpo+pb)%1000000007)%1000000007;
        
    }
};