class Solution {
public:
    int mod = 1e9+7;
    int countHousePlacements(int n) {
        vector<long long> dp(n+1,-1);
        
        long long ans = dfs(n,dp);

        return (ans*ans)%mod;
    }
    
    int dfs(int n,vector<long long> &dp) {
        
        if(n <= 0) return 1;
        
        if(dp[n] != -1) return dp[n];
        
        int place = dfs(n-2,dp);
        int notPlace = dfs(n-1,dp);
        
        return dp[n] = (place + notPlace)%mod;
    }
};