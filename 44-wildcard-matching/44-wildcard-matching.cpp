class Solution {
public:
    bool isMatch(string s, string p) {
        vector<vector<int>> dp(s.length(),vector<int> (p.length(),-1));
        return dfs(s.length()-1,p.length()-1,s,p,dp);
    }
    
    bool dfs(int i,int j,string &s,string &p,vector<vector<int>> &dp) {
        
        if(i < 0 and j < 0) return true;
        if(j < 0 and i >= 0) return false;
        if(i < 0 and j >= 0) {
            for(int ii=0;ii<=j;ii++) 
                if(p[ii] != '*') return false;
            return true;
        }
        
        
        if(dp[i][j] != -1) return dp[i][j]; 
        
        if(s[i] == p[j] or p[j] == '?')
            return dp[i][j] = dfs(i-1,j-1,s,p,dp);

        if(p[j] == '*')
            return dp[i][j] = dfs(i-1,j,s,p,dp) or dfs(i,j-1,s,p,dp);
        
        return dp[i][j] = false;
        
    }
};