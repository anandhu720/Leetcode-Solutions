class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<vector<vector<int>>> dp(prices.size(),vector<vector<int>>(2,vector<int>(2,-1)));
        return dfs(0,prices,true,1,dp);
    }
    
    int dfs(int index,vector<int> &prices,bool buy,int left,vector<vector<vector<int>>> &dp) {
        
        if(index == prices.size()) return 0;
        if(left < 0) return 0;
        
        if(dp[index][buy][left] != -1) return dp[index][buy][left];
        
        int price = 0;
        if(buy) {
            price = max(-prices[index] + dfs(index+1,prices,0,left,dp),
                         dfs(index+1,prices,1,left,dp)
                        );
        }else{
            price = max(prices[index] + dfs(index+1,prices,1,left-1,dp),
                        dfs(index+1,prices,0,left,dp)
                        );
        }
        
        return dp[index][buy][left] = price;
        
    }
};