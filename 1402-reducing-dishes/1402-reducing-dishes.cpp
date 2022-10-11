class Solution {
public:
    vector<vector<int>> dp;
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        dp.resize(satisfaction.size(),vector<int>(satisfaction.size()+1,-1));
        return dfs(0,1,satisfaction);
    }
    
    int dfs(int index,int time,vector<int> &nums) {
        
        if(index == nums.size()) return 0;
        if(dp[index][time] != -1) return dp[index][time];
        
        int take = (nums[index] * time) + dfs(index+1,time+1,nums);
        
        int notTake = dfs(index+1,time,nums);
        
        return dp[index][time] = max(take,notTake);
    }
};