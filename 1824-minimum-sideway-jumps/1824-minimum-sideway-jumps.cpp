class Solution {
public:
    int minSideJumps(vector<int>& obstacles) {
        int dp[] = {1,0,1};
        
        for(auto it : obstacles) {
            if(it > 0)
                dp[it-1] = 1e9;
            for(int i=0;i<3;i++) {
                if(it != i+1)
                    dp[i] = min(dp[i], min(dp[(i+1)%3],dp[(i+2)%3]) + 1);
            }
        }
        
        return min(dp[0],min(dp[1],dp[2]));
    }
};