class Solution {
public:
    void compute(string s,vector<vector<bool>> &dp) {
        for(int g=0;g<dp.size();g++) {
            for(int i=0,j=g;j<dp.size();i++,j++) {
                if(g==0) {
                    dp[i][j] = true;
                }else if(g==1) {
                    if(s[i] == s[j]) dp[i][j] = true;
                    else dp[i][j] = false;
                }else{
                    if(s[i] == s[j] and dp[i+1][j-1] == true) dp[i][j] = true;
                    else dp[i][j] = false;
                }
            }
        }
    }
    int minCut(string s) {
        vector<vector<bool>> isPal(s.length(),vector<bool>(s.length(),false));
        compute(s,isPal);
        
        vector<int> dp(s.length());
        
        dp[0] = 0;
        
        for(int i=1;i<s.length();i++) {
            if(isPal[0][i] == true) { //if given string is completely palindrome
                dp[i] = 0;
            }else{   //else
                int minVal = INT_MAX;
                for(int j=i;j>=1;j--) {
                    if(isPal[j][i] == true) {
                        minVal = min(minVal,dp[j-1]);
                    } 
                }
                dp[i] = minVal+1;
            }
        }
        
        return dp[dp.size()-1];
        
    }
};