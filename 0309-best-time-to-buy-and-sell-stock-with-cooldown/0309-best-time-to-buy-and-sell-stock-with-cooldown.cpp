class Solution {
public:
    vector<vector<int>> dp;
    int dfs(int index,bool have,vector<int> &prices) {
        
        if(index >= prices.size()) return 0;
        if(dp[index][have] != -1) return dp[index][have];
        
        int buy = 0,sell = 0;
        
        if(have == false) {
            buy = (-1*prices[index]) + dfs(index+1,true,prices);
        }
        
        if(have == true) {
            sell = prices[index] + dfs(index+2,false,prices);
        }
        
        int leave = dfs(index+1,have,prices);
        
        return dp[index][have] = max(leave,max(buy,sell));
    }
    int maxProfit(vector<int>& prices) {
        dp.resize(prices.size(),vector<int>(2,-1));
        return dfs(0,false,prices);
    }
};