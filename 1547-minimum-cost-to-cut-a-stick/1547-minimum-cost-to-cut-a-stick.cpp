class Solution {
private:
    vector<vector<int>> dp;
    int dfs(vector<int> &nums,int left,int right) {
        
        if(right - left <= 1) return 0;
        if(dp[left][right] != -1) return dp[left][right];
        
        int ans = INT_MAX;
        for(int i=left+1;i<right;i++) {
            ans = min(ans,(nums[right] - nums[left]) + dfs(nums,left,i) + dfs(nums,i,right));
        }
        
        return dp[left][right] = ans;
        
    }
public:
    int minCost(int n, vector<int>& cuts) {
        cuts.push_back(0);
        cuts.push_back(n);
        
        dp.resize(cuts.size()+1,vector<int>(cuts.size()+1,-1));
        
        sort(cuts.begin(),cuts.end());
        
        return dfs(cuts,0,cuts.size()-1);
    }
};