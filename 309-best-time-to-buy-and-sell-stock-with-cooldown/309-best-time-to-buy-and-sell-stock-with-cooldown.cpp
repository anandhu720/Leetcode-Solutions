class Solution {
public:
    int recur(int day,int hold,vector<int> &prices,vector<vector<int>>&cache) {
        if(day>= prices.size()) return 0;
        
        if(cache[day][hold] != -1) return cache[day][hold];
        
        if(hold == 0){  //not holding any stock
            int opt1 = recur(day+1,1,prices,cache) - prices[day]; //buy the stock;
            int opt2 = recur(day+1,0,prices,cache); //leave the stock
            return cache[day][hold] = max(opt1,opt2);
        }
        
        if(hold == 1){
            int opt1 = recur(day+2,0,prices,cache)+prices[day]; //sell the stock;
            int opt2 = recur(day+1,1,prices,cache); //holding stock
            return cache[day][hold] = max(opt1,opt2);
        }
        
        return 0;
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> cache(prices.size(),vector<int>(2,-1));
        return recur(0,0,prices,cache);
    }
};