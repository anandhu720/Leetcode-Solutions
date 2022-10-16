class Solution {
public:
    vector<vector<int>> dp;
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        dp.resize(jobDifficulty.size(),vector<int>(d+1,-1));
        int ans = dfs(0,jobDifficulty,d);
        return ans >= 1e9 ? -1 : ans;
    }
    
    int dfs(int index,vector<int> &nums,int d) {
        
        if(d == 0) {
            int maxi = 0;
            for(int i=index;i<nums.size();i++) {
                maxi = max(maxi,nums[i]);
            }
            
            return maxi;
        }
        
        if(index >= nums.size()) return 1e9;
        if(dp[index][d] != -1) return dp[index][d];
        
        int maxi = 0;
        int ans = INT_MAX;
        for(int i=index;i<nums.size();i++) {
            maxi = max(maxi,nums[i]);
            ans = min(ans,maxi + dfs(i+1,nums,d-1));
        }
        
        return dp[index][d] = ans;
    }
};