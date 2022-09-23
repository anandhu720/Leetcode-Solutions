class Solution {
public:
    int mod = 1e9 + 7;
    int firstDayBeenInAllRooms(vector<int>& nextVisit) {
        vector<long long> dp(nextVisit.size(),0);
        
        for(int i=1;i<nextVisit.size();i++) {
            if(nextVisit[i-1] == i-1) {
                dp[i] = dp[i-1] + 2;
            }else{
                dp[i] = (2 + dp[i-1] + dp[i-1] - dp[nextVisit[i-1]] + mod )% mod;
            }
        }
        
        return (int)dp[nextVisit.size()-1];
    }
};