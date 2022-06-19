class Solution {
public:
    int minCost(int n, vector<int>& cuts) {
        cuts.push_back(0);
        cuts.push_back(n);
        
        sort(cuts.begin(),cuts.end());
        
        vector<vector<int>> dp(cuts.size(),vector<int> (cuts.size(),-1));
        return dfs(0,cuts.size()-1,cuts,dp);
    }
    
    int dfs(int left,int right,vector<int> &cuts,vector<vector<int>> &dp) {
        
        if(right - left <= 1) return 0;  // size of stick is less than or equal to 1
        
        if(dp[left][right] != -1) return dp[left][right];
        
        int mini = INT_MAX;
        for(int index = left+1;index<right;index++) {
            mini = min(
                mini,
                cuts[right] - cuts[left] + dfs(left,index,cuts,dp) + dfs(index,right,cuts,dp)
            );
        }
        
        return dp[left][right] = mini;
    }
};