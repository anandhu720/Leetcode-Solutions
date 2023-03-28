class Solution {
private:
    vector<int> dp;
    int dfs(int index,vector<int> &days,vector<int> &costs) {
        
        if(index >= days.size()) return 0;
        if(dp[index] != -1) return dp[index];
        
        int ans = INT_MAX;
        for(int i=0;i<costs.size();i++) {
            int day = 0;
            if(i == 0) day = 1;
            else if(i == 1) day = 7;
            else day = 30;
            
            int nextDay = days[index] + day;
            
            int j = index;
            for(j = index;j<days.size();j++) {
                if(days[j] >= nextDay) break;
            }
            
            ans = min(ans,costs[i] + dfs(j,days,costs));
            
        }
        
        return dp[index] = ans;
    }
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        dp.resize(days.size(),-1);
        return dfs(0,days,costs);
    }
};