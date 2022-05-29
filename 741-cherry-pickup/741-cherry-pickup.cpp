class Solution {
public:
    //always r1+c1 = r2+c2
    //so we dont need to store only 3 values
    int dp[51][51][51];
    int cherryPickup(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        int ans = dfs(0,0,0,grid);
        return ans < 0 ? 0 : ans;
    }
    
    int dfs(int r1,int c1,int r2,vector<vector<int>> &grid) {
        int n = grid.size();
        int c2 = (r1+c1) - r2;
        if(r1>=n or r2>=n or c1>=n or c2>=n or grid[r1][c1] == -1 or grid[r2][c2] == -1)
            return INT_MIN;
        
        if(r1 == n-1 and c1 == n-1) return grid[r1][c1];
        
        if(dp[r1][c1][r2] != -1) return dp[r1][c1][r2];
        
        
        int cherries = 0;
        
        if(r1 == r2 and c1 == c2) {
            cherries += grid[r1][c1];
        }else{
            cherries += (grid[r1][c1] + grid[r2][c2]);
        }
        
        int f1 = dfs(r1+1,c1,r2+1,grid); //d,d
        int f2 = dfs(r1,c1+1,r2,grid); //r,r
        int f3 = dfs(r1+1,c1,r2,grid); //d,r
        int f4 = dfs(r1,c1+1,r2+1,grid); //r,d
        
        cherries += max(max(f1,f2),max(f3,f4));
        
        return dp[r1][c1][r2] = cherries;
        
    }
};