class Solution {
public:
    int mod = 1e9 + 7;
    vector<vector<vector<vector<int>>>> dp;
    int numOfWays(int n) {
        dp.resize(n+1,vector<vector<vector<int>>>(4,vector<vector<int>>(4,vector<int>(4,-1))));
        return dfs(n,0,0,0);
    }
    
    int dfs(int n,int a0,int b0,int c0) {
        if(n == 0) return 1;
        
        if(dp[n][a0][b0][c0] != -1) return dp[n][a0][b0][c0];
        
        vector<int> arr = {1,2,3};
        int ans = 0;
        for(auto a : arr) {
            if(a0 == a) continue;
            for(auto b : arr) {
                if(b0 == b or a == b) continue;
                for(auto c : arr) {
                    if(c0 == c or b == c) continue;
                    ans += dfs(n-1,a,b,c)%mod;
                    ans %= mod;
                }
            }
        }
        
        return dp[n][a0][b0][c0] = ans;
    }
};