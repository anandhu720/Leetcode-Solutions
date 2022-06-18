class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> dp(nums1.size(),vector<int>(nums2.size(),-1));
        return dfs(0,0,nums1,nums2,dp);
    }
    
    int dfs(int i,int j,vector<int> &s,vector<int> &p,vector<vector<int>> &dp) {
        
        if(i == s.size() or j == p.size()) return 0;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        if(s[i] == p[j]) return dp[i][j] = 1 + dfs(i+1,j+1,s,p,dp);
        
        return dp[i][j] = max(dfs(i+1,j,s,p,dp),dfs(i,j+1,s,p,dp));
    }
};