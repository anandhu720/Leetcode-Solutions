```
class Solution {
public:
int minOperations(vector<int>& nums, int x) {
vector<vector<int>> dp(nums.size(),vector<int>(nums.size(),-1));
int ans = dfs(0,nums.size()-1,nums,x,dp);
return ans > 1e9 ? -1 : ans;
}
int dfs(int left,int right,vector<int> &nums,int x,vector<vector<int>> &dp) {
if(left > right or x <= 0) {
if(x == 0) return 0;
return 1e9;
}
​
if(dp[left][right] != -1) return dp[left][right];
int takeLeft = 1 + dfs(left+1,right,nums,x - nums[left],dp);
int takeRight = 1 + dfs(left,right-1,nums,x - nums[right],dp);
return dp[left][right] = min(takeLeft,takeRight);
}
};
```