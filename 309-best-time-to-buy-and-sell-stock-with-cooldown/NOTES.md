```
class Solution {
public:
int maxProfit(vector<int>& prices) {
vector<vector<int>> dp(prices.size(),vector<int>(2,-1));
return dfs(0,1,prices,dp);
}
int dfs(int index,int buy,vector<int> &prices,vector<vector<int>> &dp) {
if(index >= prices.size()) return 0;
if(dp[index][buy] != -1) return dp[index][buy];
int price = 0;
if(buy == 1)
price = max(-prices[index] + dfs(index+1,0,prices,dp),dfs(index+1,1,prices,dp));
else
price = max(prices[index] + dfs(index+2,1,prices,dp),dfs(index+1,0,prices,dp));
return dp[index][buy] = price;
}
};
```