class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        vector<vector<int>> dp(prices.size(),vector<int>(2,-1));
        return recur(0,0,prices,fee,dp); 
    }
    int recur(int day,int hold,vector<int> &prices,int fee,vector<vector<int>> &dp){
        if(day>=prices.size()) return 0;
        
        if(dp[day][hold] != -1) return dp[day][hold];
        
        if(hold == 0){ //not having stocks
            int opt1 = recur(day+1,1,prices,fee,dp) - (prices[day]);
            int opt2 = recur(day+1,0,prices,fee,dp);
            return dp[day][hold] = max(opt1,opt2);
        }
        
        if(hold == 1){
            int opt1 = recur(day+1,0,prices,fee,dp) + (prices[day] - fee);
            int opt2 = recur(day+1,1,prices,fee,dp);
            return dp[day][hold] = max(opt1,opt2);
        }
        
        return 0;
    }
};