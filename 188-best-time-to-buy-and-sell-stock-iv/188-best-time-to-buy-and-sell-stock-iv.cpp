class Solution {
public:
    int maxProfit(int time, vector<int>& prices) {
        vector<vector<int>> prev(2,vector<int>(time+1,0)),curr(2,vector<int>(time+1,0));
        
        for(int index=prices.size()-1;index >= 0;index--) {
            for(int buy=0;buy<2;buy++) {
                for(int k=1;k <= time;k++) {
                    
                    int price = 0;
                    if(buy == 1) 
                        price = max(-prices[index] + prev[0][k],prev[1][k]);
                    else
                        price = max(prices[index] + prev[1][k-1],prev[0][k]);     
                    
                    curr[buy][k] = price;
                }
            }
            prev = curr;
        }
        
        return curr[1][time];
        
        
    }
};