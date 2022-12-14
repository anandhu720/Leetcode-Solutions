class Solution {
public:
    int dfs(int index,vector<int> &nums,vector<int> &dp) {
        
        if(index >= nums.size()) return 0;
        if(dp[index] != -1) return dp[index];
        
        int rob = nums[index] + dfs(index+2,nums,dp);
        int leave = dfs(index+1,nums,dp);
        
        return dp[index] = max(rob,leave);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return dfs(0,nums,dp);
    }
};