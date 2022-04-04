class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1,0);
        if(n == 1) return 1;
        
        dp[1] = 1;
        for(int i=2;i<dp.size();i++) {
            int mini = INT_MAX;
            for(int j=1;j*j <= i;j++) {
                int rem  = i - j*j;
                if(mini > dp[rem]) {
                    mini = dp[rem];
                }
            }
            
            dp[i] = mini + 1;
        }
        
        return dp[n];
    }
};