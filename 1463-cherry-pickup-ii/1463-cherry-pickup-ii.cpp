class Solution {
public:
    int dp[71][71][71];
    int cherryPickup(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        return dfs(0,0,grid[0].size()-1,grid);
    }
    
    int dfs(int r1,int c1,int c2,vector<vector<int>> &grid) {
        
        if(r1 >= grid.size() or c1<0 or c1>=grid[0].size() or c2<0 or c2>=grid[0].size())
            return 0;    
        
        if(dp[r1][c1][c2] != -1) return dp[r1][c1][c2];
        
        int cherries = 0;
        if(c1 == c2) {
            cherries += grid[r1][c1];
        }else{
            cherries += (grid[r1][c1] + grid[r1][c2]);
        }
        
        int w[9];
        
        w[0] = dfs(r1+1,c1-1,c2-1,grid);
        w[1] = dfs(r1+1,c1-1,c2,grid);
        w[2] = dfs(r1+1,c1-1,c2+1,grid);
        
        w[3] = dfs(r1+1,c1,c2-1,grid);
        w[4] = dfs(r1+1,c1,c2,grid);
        w[5] = dfs(r1+1,c1,c2+1,grid);
        
        w[6] = dfs(r1+1,c1+1,c2-1,grid);
        w[7] = dfs(r1+1,c1+1,c2,grid);
        w[8] = dfs(r1+1,c1+1,c2+1,grid);
        
        int maxi = INT_MIN;
        for(auto it : w) maxi = max(maxi,it);
        
        cherries += maxi;
        
        return dp[r1][c1][c2] = cherries;   
        
    }
};