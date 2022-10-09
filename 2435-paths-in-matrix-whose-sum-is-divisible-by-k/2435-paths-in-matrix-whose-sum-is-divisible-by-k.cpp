class Solution {
public:
    int mod = 1e9 + 7;
    vector<vector<vector<int>>> dp;
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        dp.resize(grid.size(),vector<vector<int>>(grid[0].size(),vector<int>(k+1,-1)));
        return dfs(0,0,grid,k);
    }
    int dfs(int i,int j,vector<vector<int>> &grid,int k,long long sum=0) {
        
        if(i == grid.size() or j == grid[0].size()) return 0;
        
        if(i == grid.size()-1 and j == grid[0].size()-1) {
            sum += grid[i][j];
            if(sum%k == 0) return 1;
            return 0;
        }
        
        if(dp[i][j][sum] != -1) return dp[i][j][sum];
     
        int down = dfs(i+1,j,grid,k,(sum+grid[i][j])%k);
        int right = dfs(i,j+1,grid,k,(sum+grid[i][j])%k);
        
        return dp[i][j][sum] = (down+right)%mod;
    }
};