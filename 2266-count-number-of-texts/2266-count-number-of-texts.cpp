class Solution {
public:
    static const int mod = 1e9+7;
    int dp[100001];
    static constexpr int keys[10] = {0,0,3,3,3,3,3,4,3,4};  // key '1' and '0' not to be used
    int countTexts(string pressedKeys) {
        memset(dp, -1, sizeof(dp));
        return getCounts(pressedKeys, 0);
    }
    
    int getCounts(string &pressed, int idx) {
        if(idx == pressed.length())
            return 1;
        if(dp[idx] != -1)
            return dp[idx];
        int digit = pressed[idx]-'0'; long counts = 0;
        for(int i = 0; i < keys[digit] && idx+i < pressed.length() && pressed[idx] == pressed[idx+i]; i++) {
            counts += getCounts(pressed, idx+i+1);
            counts %= mod;
        }
        return dp[idx] = counts;
    }
};