class Solution {
public:
    int minInsertions(string s) {
        vector<vector<int>> dp(s.length(),vector<int>(s.length(),0));
        
        for(int g=0;g<dp.size();g++) {
            for(int i=0,j=g;j<dp.size();i++,j++) {
                if(g == 0) {
                    dp[i][j] = 1;
                }else if(g == 1) {
                    if(s[i] == s[j]) dp[i][j] = 2;
                    else dp[i][j] = 1;
                }else {
                    if(s[i] == s[j]) dp[i][j] = 2 + dp[i+1][j-1];
                    else dp[i][j] = max(dp[i+1][j],dp[i][j-1]);
                }
            }
        }
        
        int length = dp[0][dp.size()-1];
        
        return s.length() - length;
    }
};