class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.size() + s2.size() != s3.size())
            return false;
        
        vector<vector<int>> dp(s1.length()+1,vector<int>(s2.length()+1,-1));
        return dfs(0,0,0,s1,s2,s3,dp);
        
    }
    bool dfs(int i,int j,int k,string &s1,string &s2,string &s3,vector<vector<int>> &dp){
        
        if(i == s1.length() and j == s2.length())
            return true;
        
        if(i > s1.length() or j > s2.length() or (s1[i] != s3[k] and s2[j] != s3[k]))
            return false;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        return dp[i][j] = (s1[i] == s3[k] and dfs(i+1,j,k+1,s1,s2,s3,dp)) or 
                          (s2[j] == s3[k] and dfs(i,j+1,k+1,s1,s2,s3,dp));
    }
};