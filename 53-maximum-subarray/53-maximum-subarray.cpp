class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> dp(nums.size(),0);
        
        dp[0] = nums[0];
        int maxi = dp[0];
        for(int i=1;i<dp.size();i++){
            dp[i] = max(nums[i],dp[i-1]+nums[i]);
            maxi = max(maxi,dp[i]);
        }
        return maxi;
    }
};