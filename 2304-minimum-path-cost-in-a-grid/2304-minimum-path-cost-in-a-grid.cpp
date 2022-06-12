class Solution {
public:
    int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {
        
        int m = grid.size() , n = grid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,0));
        
        for(int i=0;i<n;i++) dp[m-1][i] = grid[m-1][i];
        
        for(int i=m-2;i>=0;i--) {
            for(int j=0;j<n;j++) {
                int mini = INT_MAX;
                for(int k=0;k<n;k++) {
                    mini = min(
                      mini,
                      grid[i][j] + moveCost[grid[i][j]][k] + dp[i+1][k]
                    );
                }
                dp[i][j] = mini;
            }
        }
        
        int res = INT_MAX;
        for(auto it : dp[0])
            res = min(res,it);
        
        return res;
        
    }
    
};