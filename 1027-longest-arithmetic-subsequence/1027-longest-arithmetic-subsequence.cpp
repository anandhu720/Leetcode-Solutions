class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n,vector<int>(2000,0));
        int res = 0;
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<i;j++) {
                int diff = nums[i] - nums[j] + 1000;
                dp[i][diff] = max(2,dp[j][diff]+1);
                res = max(res,dp[i][diff]);
            }
        }
        
        return res;
    }
};