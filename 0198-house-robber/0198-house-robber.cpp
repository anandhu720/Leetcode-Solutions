class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+2,0);
        
        for(int i=nums.size()-1;i>=0;i--){
            dp[i] = max(dp[i+1],nums[i] + dp[i+2]);
        }
        
        return dp[0];
    }
};