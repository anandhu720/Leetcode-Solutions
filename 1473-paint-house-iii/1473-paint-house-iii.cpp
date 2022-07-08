class Solution {
public:
    vector<vector<int>> cost;
    int minCost(vector<int>& houses, vector<vector<int>>& costs, int m, int n, int target) {
        cost = costs;
        vector<vector<vector<int>>> dp(m,vector<vector<int>>(n+1,vector<int>(target+1,-1)));
        int res = dfs(0,n,0,target,houses,dp);
        return res >= 1e9 ? -1 : res;
    }
    
    int dfs(int index,int n,int prevColor,int target,vector<int> &houses,vector<vector<vector<int>>> &dp) {
        
        if(index == houses.size() and target == 0) return 0;
        if(target < 0 or index == houses.size()) return 1e9;
        
        if(dp[index][prevColor][target] != -1) return dp[index][prevColor][target];
        
        int ans = INT_MAX;
        
        if(houses[index] != 0) {
            if(prevColor == houses[index])
                return  dp[index][prevColor][target] =                                                                         dfs(index+1,n,houses[index],target,houses,dp);
            return dp[index][prevColor][target] =
                dfs(index+1,n,houses[index],target-1,houses,dp);
        }
        
        for(int color = 1;color<=n;color++) {
            if(prevColor == color)
                ans = min(ans,cost[index][color-1] + dfs(index+1,n,color,target,houses,dp));
            else
                ans = min(ans,cost[index][color-1] + dfs(index+1,n,color,target-1,houses,dp));
        }
        
        return dp[index][prevColor][target] = ans;
    }
};