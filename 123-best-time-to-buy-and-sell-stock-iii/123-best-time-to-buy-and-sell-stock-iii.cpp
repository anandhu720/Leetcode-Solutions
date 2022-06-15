class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<vector<vector<int>>> dp(prices.size()+1,
                    vector<vector<int>>(2,vector<int>(3,-1)));
        
        for(int index=prices.size()-1;index>=0;index--) {
            for(int buy=0;buy<2;buy++) {
                for(int left = 1;left<=2;left++) {
                    int price = 0;
                    if(buy == 1) {
                        price = max(-prices[index] + dp[index+1][0][left],
                         dp[index+1][1][left]
                        );     
                    }else{
                        price = max(prices[index] + dp[index+1][1][left-1],
                        dp[index+1][0][left]
                        );
                    }
                    dp[index][buy][left] = price;
                }
                
            }
        }
        
        
        return dp[0][1][2] + 1;
    }    
};