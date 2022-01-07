class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minPrice = INT_MAX;
        for(auto i : prices){
            if(i < minPrice) minPrice = i;
            maxProfit = max(maxProfit,i-minPrice);
        }
        return maxProfit;
    }
};