class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.length(),n = p.length();
        vector<vector<bool>> dp(m+1,vector<bool> (n+1,false));
        
        dp[0][0] = true;
        
        for(int i=1;i<=n;i++) {
            bool flag = true;
            for(int ii=1;ii<=i;ii++) 
                if(p[ii-1] != '*') {
                    flag = false;
                    break;
                }
            dp[0][i] = flag;
        }
        
        for(int i=1;i<=m;i++) {
            for(int j=1;j<=n;j++) {
                if(s[i-1] == p[j-1] or p[j-1] == '?')
                    dp[i][j] = dp[i-1][j-1];
                else if(p[j-1] == '*')
                    dp[i][j] = (dp[i-1][j] or dp[i][j-1]);
                else
                    dp[i][j] = false;
            }
        }
        
        return dp[m][n];       
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