class Solution {
public:
    int longestIdealString(string s, int k) {
        vector<vector<int>> dp(s.length()+1,vector<int>(27,0));
        
        for(int index=s.length()-1;index>=0;index--) {
            for(int prev=26;prev >=0;prev--) {

                int take = 0,notTake = 0;
                if(abs(prev-(s[index]-'a')) <= k ){ 
                    take = 1 + dp[index+1][s[index] - 'a'];
                }
                
                notTake = dp[index+1][prev];  
                
                dp[index][prev] = max(take,notTake);
            }
        }
        int ans = 0;
        for(int i=0;i<26;i++) {
            ans = max(ans,dp[0][i]);
        }
        
        return ans;
    }
};