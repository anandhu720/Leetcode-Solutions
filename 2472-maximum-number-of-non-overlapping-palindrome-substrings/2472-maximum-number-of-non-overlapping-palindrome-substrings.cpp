class Solution {
public:
    int countSubstrings(string s,vector<vector<bool>> &dp) {
        
        int count = 0;
        for(int g=0;g<s.length();g++) {
            for(int i=0,j=g;j<s.length();j++,i++) {
                
                if(g == 0) {
                    dp[i][j] = true;
                }else if(g == 1){
                    if(s[i] == s[j]) dp[i][j] = true;
                }else{
                    if(s[i] == s[j] and dp[i+1][j-1]) dp[i][j] = true; 
                }
                
                if(dp[i][j]) count++;
                
            }
        }
        
        return count;
    }
    
    int maxPalindromes(string s, int k) {
        vector<long long> dp(s.length()+1,0);
        vector<vector<bool>> pal(s.length(),vector<bool>(s.length(),false));
        countSubstrings(s,pal);
        
        
        for(long long right=s.length()-1;right>=0;right--) {
            for(long long left=s.length()-1;left>=0;left--) {
                long long x = 0;
                if(right - left+1 >= k and pal[left][right] == true) x = 1;
                long long take = x + dp[right+1];
                long long nottake = dp[left];
                dp[left] = max(take,nottake);
            }
        }
        return dp[0];
    }
};