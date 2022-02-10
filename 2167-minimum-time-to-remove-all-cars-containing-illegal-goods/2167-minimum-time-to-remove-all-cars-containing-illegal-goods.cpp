class Solution {
public:
    int minimumTime(string s) {
        int n = s.length();
        vector<int> dp(n+1,0);
        
        int ans = n;
        for(int left=1;left<=n;left++){
            
            dp[left] = min(left,dp[left-1]+2*(s[left-1] - '0'));
            
            ans = min(ans,dp[left]+(n-left));
        }
        
        return ans;
    }
};