class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        vector<bool> dp(s.length(),false);
        
        dp[0] = true;
        
        int prev = 0;
        
        for(int i=minJump;i<s.length();i++) {
            prev += dp[i - minJump];
            if(i - maxJump > 0) {
                prev -= dp[i-maxJump-1];
            }
            
            dp[i] = s[i] == '0' and prev;
        }
        
        return dp.back();
    }
};