class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> prev(2,vector<int>(3,0)), curr(2,vector<int>(3,0));
        
        for(int index=prices.size()-1;index>=0;index--) {
            for(int buy=0;buy<2;buy++) {
                for(int left = 1;left<=2;left++) {
                    int price = 0;
                    if(buy == 1) {
                        price = max(-prices[index] + prev[0][left],
                         prev[1][left]
                        );     
                    }else{
                        price = max(prices[index] + prev[1][left-1],
                        prev[0][left]
                        );
                    }
                    curr[buy][left] = price;
                }
                
            }
            prev = curr;
        }
        
        
        return curr[1][2];
    }    
};