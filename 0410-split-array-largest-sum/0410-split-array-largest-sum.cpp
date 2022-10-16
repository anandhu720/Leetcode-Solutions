class Solution {
public:
    vector<long long> x;
    vector<vector<int>> dp;
    long long dfs(int index,vector<int> &nums,int k) {
        
        if(k == 0) {
            return x[x.size()-1] - x[index-1];
        }
        if(index == nums.size()) return 1e9;
        
        if(dp[index][k] != -1) return dp[index][k];
        
        long long ans = INT_MAX;
        long long sum = 0;
        for(int i=index;i<nums.size();i++) {
            sum += nums[i];
            ans = min(ans,max(sum,dfs(i+1,nums,k-1)));
        }
        
        return dp[index][k] = ans;
    }
    int splitArray(vector<int>& nums, int k) {
        dp.resize(nums.size(),vector<int>(k,-1));
        x.resize(nums.size(),0);
        x[0] = nums[0];
        for(int i=1;i<nums.size();i++) {
            x[i] = x[i-1] + nums[i];
        }
        
        if(k == 1) return x[x.size()-1];
        return dfs(0,nums,k-1);   
    }
};