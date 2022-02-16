class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        vector<vector<int>> dp = matrix;
        for(int i=dp.size()-2;i>=0;i--){
            for(int j=0;j<dp[i].size();j++){
                if(j == 0){
                    dp[i][j] += min(dp[i+1][j],dp[i+1][j+1]);
                }else if(j == dp[i].size()-1){
                    dp[i][j] += min(dp[i+1][j],dp[i+1][j-1]);
                }else{
                    dp[i][j] += min(dp[i+1][j],min(dp[i+1][j+1],dp[i+1][j-1]));
                }
            }
        }
        
        int mini = INT_MAX;
        for(int i=0;i<dp[0].size();i++)
            mini = min(mini,dp[0][i]);
        return mini;
    }
};