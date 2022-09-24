class Solution {
public:
    int mod = 1e9 + 7;
    vector<vector<long long>> dp;
    int numWays(int steps, int arrLen) {
        dp.resize((steps/2) + 1,vector<long long>(steps+1,-1));
        return dfs(0,arrLen,steps);
    }
    
    int dfs(int index,int len,int steps) {
        
        if(index == len or index < 0 or index > steps) return 0;
        if(steps == 0) {
            if(index == 0) return 1;
            return 0;
        }
        
        if(dp[index][steps] != -1) return dp[index][steps];
        
        long long f = dfs(index+1,len,steps-1);
        long long b = dfs(index-1,len,steps-1);
        long long s = dfs(index,len,steps-1);
        
        return dp[index][steps] = ((f+b)%mod+s)%mod;
    }
};