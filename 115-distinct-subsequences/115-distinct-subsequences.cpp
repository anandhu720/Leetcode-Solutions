class Solution {
public:
    int numDistinct(string s, string t) {
        int m = s.size(), n = t.size();
        vector<vector<double>> dp(m+1,vector<double>(n+1,0));
        
        
        for(int i=1;i<=m;i++) {
            if(s[i-1] == t[0]) dp[i][1] = dp[i-1][1] + 1;
            else dp[i][1] = dp[i-1][1];   
        }
        
        
        
        for(int i=1;i<=m;i++) {
            for(int j=2;j<=n;j++) {
                if(s[i-1] == t[j-1]) {
                    dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        return dp[m][n];
        
    }
};