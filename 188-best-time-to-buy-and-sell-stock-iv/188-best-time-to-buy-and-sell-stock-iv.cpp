class Solution {
public:
    int maxProfit(int time, vector<int>& prices) {
        vector<vector<vector<int>>> dp(prices.size()+1,
                                    vector<vector<int>> (2,vector<int>(time+1,0)) 
                                     );
        
        for(int index=prices.size()-1;index >= 0;index--) {
            for(int buy=0;buy<2;buy++) {
                for(int k=1;k <= time;k++) {
                    
                    int price = 0;
                    if(buy == 1) 
                        price = max(-prices[index] + dp[index+1][0][k],dp[index+1][1][k]);
                    else
                        price = max(prices[index] + dp[index+1][1][k-1],dp[index+1][0][k]);     
                    
                    dp[index][buy][k] = price;
                }
            }
        }
        
        return dp[0][1][time];
        
        
    }
};