class Solution {
public:
    int numTeams(vector<int>& rating) {
        vector<int> nums(rating.size()+1,0);
        for(int i=1;i<nums.size();i++) nums[i] = rating[i-1];
        
        // vector<vector<vector<int>>> dp1(nums.size(),vector<vector<int>>(nums.size(),vector<int>(4,-1)));
        // vector<vector<vector<int>>> dp2(nums.size(),vector<vector<int>>(nums.size(),vector<int>(4,-1)));
        vector<vector<int>> dp1(nums.size(),vector<int>(4,-1));
        vector<vector<int>> dp2(nums.size(),vector<int>(4,-1));
        
        int cnt = 0;
        cnt += dfs(1,0,3,nums,0,dp1);
        nums[0] = 1e9;
        cnt += dfs(1,0,3,nums,1,dp2);
        
        return cnt;
    }
    
    int dfs(int index,int prev,int k,vector<int> &nums,int x,vector<vector<int>> &dp) {
        
        if(k == 0) return 1;
        if(index == nums.size()) return 0;
        
        if(dp[prev][k] != -1) return dp[prev][k];
        
        int nottake = dfs(index+1,prev,k,nums,x,dp);
        int take = 0;
        if((x == 0 and nums[index] > nums[prev]) or (x == 1 and nums[index] < nums[prev]) ) {
            take = dfs(index+1,index,k-1,nums,x,dp);
        }
        
        return dp[prev][k] = take + nottake;
    }
};
