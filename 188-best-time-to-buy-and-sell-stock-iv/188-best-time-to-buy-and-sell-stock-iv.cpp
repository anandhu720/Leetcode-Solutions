class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        vector<vector<vector<int>>> dp(prices.size(),
                                    vector<vector<int>> (2,vector<int>(k+1,-1)) 
                                     );
        return dfs(0,prices,1,k,dp);
    }
    
    int dfs(int index,vector<int> &prices,int buy,int k,vector<vector<vector<int>>> &dp) {
        
        if(index == prices.size() or k == 0) return 0;
        
        if(dp[index][buy][k] != -1) return dp[index][buy][k];
        
        int price = 0;
        if(buy == 1) 
            price = max(
                        -prices[index] + dfs(index+1,prices,0,k,dp),
                        dfs(index+1,prices,1,k,dp)
                    );
        else
            price = max(
                        prices[index] + dfs(index+1,prices,1,k-1,dp),
                        dfs(index+1,prices,0,k,dp)
                    );
        
        return dp[index][buy][k] = price;
    }
};