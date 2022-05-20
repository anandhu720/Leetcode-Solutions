class Solution {
public:
    int minCost(int n, vector<int>& cuts) {
        cuts.emplace_back(0);
        cuts.emplace_back(n);
        sort(cuts.begin(),cuts.end());
        
        vector<vector<int>> dp(cuts.size()+2,vector<int> (cuts.size()+2,-1));
        
        return dfs(cuts,0,cuts.size()-1,dp);
    }
    
    int dfs(vector<int> &cuts,int left,int right,vector<vector<int>> &dp) {
        
        if(right - left <= 1) return 0;
        
        if(dp[left][right] != -1) return dp[left][right];
        
        int ans = INT_MAX;
        for(int cut = left+1;cut<right;cut++) {
            ans = min(ans,
                      (cuts[right] - cuts[left])+dfs(cuts,left,cut,dp)+dfs(cuts,cut,right,dp)
                     );
        }
        
        return dp[left][right] = ans;
        
    }
};