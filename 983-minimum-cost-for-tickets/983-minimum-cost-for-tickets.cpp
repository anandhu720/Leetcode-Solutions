class Solution {
public:
    int helper(int ind, vector<int>& days, vector<int>& costs, vector<int> &dp) {
        if(ind >= days.size()) return 0;
        if(dp[ind] != -1) return dp[ind];
        
        int curans = INT_MAX;
        
        for(int i=0;i<3;i++) {
            int next = days[ind];
            if(i==0) next += 1;
            else if(i==1) next += 7;
            else next += 30;
            int nextind = lower_bound(days.begin(), days.end(), next) - days.begin();
            int temp = costs[i] + helper(nextind, days, costs, dp);
            curans = min(curans, temp);
        }
		
        return dp[ind] = curans;
    }
    
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        sort(days.begin(), days.end());
        vector<int> dp(370, -1);
        int maxi = days[days.size()-1];
        return helper(0, days, costs, dp);
    }
};