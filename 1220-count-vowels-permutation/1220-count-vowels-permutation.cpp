class Solution {
public:
    int m = 1e9 + 7;
    int countVowelPermutation(int n) {
        vector<char> s = {'a','e','i','o','u'};
        char prev = '{';
        vector<vector<int>> dp(n+1,vector<int>(27,-1));
        return dfs(n,s,prev,dp);
    }
    
    int dfs(int n,vector<char> &s,char prev,vector<vector<int>> &dp) {
        
        if(n == 0) return 1;
        
        if(dp[n][prev - 'a'] != -1) return dp[n][prev - 'a'];
        
        long long ans = 0;
        for(int i=0;i<s.size();i++) {
            
            if(prev == '{') ans += dfs(n-1,s,s[i],dp)%m;
            else if(prev == 'a' and s[i] == 'e') ans += dfs(n-1,s,s[i],dp)%m;
            else if(prev == 'e' and (s[i] == 'a' or s[i] == 'i')) ans += dfs(n-1,s,s[i],dp)%m;
            else if(prev == 'i' and s[i] != 'i') ans += dfs(n-1,s,s[i],dp)%m;
            else if(prev == 'o' and (s[i] == 'i' or s[i] == 'u')) ans += dfs(n-1,s,s[i],dp)%m;
            else if(prev == 'u' and s[i] == 'a') ans += dfs(n-1,s,s[i],dp)%m;
            
        }
        
        return dp[n][prev - 'a'] = ans%m;
    }
};