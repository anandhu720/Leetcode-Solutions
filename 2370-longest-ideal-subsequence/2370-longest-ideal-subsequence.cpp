class Solution {
public:
    vector<vector<int>> dp;
    int longestIdealString(string s, int k) {
        dp.resize(s.length(),vector<int>(28,-1));
        return dfs(0,s,k,27);
    }
    
    int dfs(int index,string &s,int k,int prev) {
        
        if(index == s.length()) return 0;
        if(dp[index][prev] != -1) return dp[index][prev];
        
        int take = 0,notTake = 0;
        if(prev == 27 or abs(prev-(s[index]-'a')) <= k ){
            take = 1 + dfs(index+1,s,k,s[index] - 'a');
        }
        
        notTake = dfs(index+1,s,k,prev);
        
        return dp[index][prev] = max(take,notTake);
    }
};