class Solution {
public:
    string longestPalindrome(string s) {
        vector<vector<bool>> dp(s.length(),vector<bool>(s.length(),false));
        int begin = 0,length = 1;
        for(int g=0;g<s.length();g++){
            int i,j;
            for(i=0,j=g;j<s.length();j++,i++){
                if(g == 0){
                    dp[i][j] = true;
                }else if(g == 1){
                    if(s[i] == s[j]){
                    dp[i][j] = true;
                    begin = i;   
                    length = 2;
                    }else dp[i][j] = false;
                }else{
                    if(s[i] == s[j] && dp[i+1][j-1] == true){
                        dp[i][j] = true;
                        begin = i;
                        length = j-i+1;
                    }
                }
            }
        }
        
        return s.substr(begin,length);
    }
};