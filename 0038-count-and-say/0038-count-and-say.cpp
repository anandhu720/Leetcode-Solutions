class Solution {
public:
    string countAndSay(int n) {
        vector<string> dp(n,"");
        dp[0] = "1";
        for(int i=1;i<dp.size();i++) {
            string num = dp[i-1];
            int count = 0;
            for(int j=0;j<num.length();j++) {
                if(j+1 < num.length() and num[j] == num[j+1])
                    count++;
                else {
                    count++;
                    dp[i] += (to_string(count) + num[j]);
                    count = 0;
                }
            }
        }
        
        return dp[n-1];
    }
};