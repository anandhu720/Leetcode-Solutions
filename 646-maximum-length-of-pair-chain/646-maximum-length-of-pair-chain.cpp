class Solution {
private:
    static bool cmp(vector<int> &a,vector<int> &b) {
	    return a[1] < b[1];
    }
    int dfs(int index,int prev,vector<vector<int>> &pairs,vector<int> &dp) {
        
        if(index == pairs.size()) return 0;
        
        if(dp[index] != -1) return dp[index];
        
        int take = 0,notTake = 0;
        if(prev < pairs[index][0]) take = 1 + dfs(index+1,pairs[index][1],pairs,dp);
        
        notTake = dfs(index+1,prev,pairs,dp);
        
        return dp[index] = max(take,notTake);
    }
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(),cmp);
        vector<int> dp(pairs.size(),-1);
        return dfs(0,INT_MIN,pairs,dp);
    }
};