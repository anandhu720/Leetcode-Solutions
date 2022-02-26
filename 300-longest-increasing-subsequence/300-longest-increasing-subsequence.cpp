class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(),1);
        for(int i=1;i<nums.size();i++){
            int maxValue = 1;
            for(int j=0;j<i;j++){
                if(nums[j] < nums[i])
                    maxValue = max(maxValue,dp[j]+dp[i]);
            }
            dp[i] = maxValue;
        }
        
        int ans = INT_MIN;
        for(auto it : dp)
            ans = max(ans,it);
        return ans;
    }
};