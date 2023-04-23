class Solution {
private:
    int mod = 1e9 + 7;
    int length = 0;
    int dfs(int left,int right,string &s,int k,vector<int> &dp) {
        
        if(right == s.length()-1) {
            string tmp = s.substr(left,right-left+1);
            if(tmp.size() > length) return 0;
            long long num = stol(tmp);
            if(num >= 1 and num <= k) return 1;
            return 0;
        }
        
        if(dp[left] != -1) return dp[left];
        
        //break;
        int ans = 0;
        if(s[right+1] != '0') {
            string tmp = s.substr(left,right-left+1);
            if(tmp.size() > length) return 0;
            else{
                long long num = stol(tmp);
                if(num >= 1 and num <= k)
                    ans += dfs(right+1,right+1,s,k,dp)%mod;
            }
            ans %= mod;
        }
        
        ans += dfs(left,right+1,s,k,dp)%mod;
        ans %= mod;
        return dp[left] = ans;
    }
public:
    int numberOfArrays(string s, int k) {
        int K = k;
        while(K) {
            length++;
            K /= 10;
        }
        vector<int> dp(s.length(),-1);
        return dfs(0,0,s,k,dp);
    }
};