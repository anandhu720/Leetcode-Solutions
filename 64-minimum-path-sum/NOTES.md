# USING EXTRA SPACE
```
class Solution {
 public:
  int minPathSum(vector<vector<int>>& grid) {
   vector<vector<int>> dp = grid;
   for(int i=1;i<dp.size();i++) dp[i][0] += dp[i-1][0];
   for(int i=1;i<dp[0].size();i++) dp[0][i] += dp[0][i-1];
   for(int i=1;i<dp.size();i++){
    for(int j=1;j<dp[0].size();j++){
     dp[i][j] = dp[i][j] + min(dp[i][j-1],dp[i-1][j]);
    }
   }
   return dp[dp.size()-1][dp[0].size()-1];
 }
};
```
