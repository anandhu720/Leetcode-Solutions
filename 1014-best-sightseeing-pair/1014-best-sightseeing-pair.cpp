class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        vector<int> dp(values.size(),0);
        dp[0] = values[0];
        int ans = 0;
        for(int i=1;i<dp.size();i++){
            ans = max(ans,dp[i-1]+values[i]-1);
            dp[i] = max(dp[i-1]-1,values[i]);
        }
        
        return ans;
    }
};