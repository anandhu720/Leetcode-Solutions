class Solution {
public:
    int numDistinct(string s, string t) {
        vector<vector<int>> dp(s.size(),vector<int>(t.size(),-1));
        return dfs(s.size()-1,t.size()-1,s,t,dp);
    }
    
    int dfs(int i,int j,string &s,string &t,vector<vector<int>> &dp) {
        
        if(j < 0) return 1;
        if(i < 0) return 0;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        int match = 0,notMatch = 0;
        if(s[i] == t[j]) {
            match = dfs(i-1,j-1,s,t,dp) + dfs(i-1,j,s,t,dp);
        }else{
            notMatch = dfs(i-1,j,s,t,dp);
        }
        
        return dp[i][j] = match + notMatch;
    }
};