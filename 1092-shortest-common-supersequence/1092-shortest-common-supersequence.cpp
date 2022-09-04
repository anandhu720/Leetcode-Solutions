class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int i=0,j=0;
        string res = "";
        for(auto c : lca(str1,str2)) {
            while(str1[i] != c)
                res += str1[i++];
            while(str2[j] != c)
                res += str2[j++];
            res += c;
            i++;
            j++;
        }
        
        return res + str1.substr(i) + str2.substr(j);
    }
    
    string lca(string &s,string &t) {
        vector<vector<string>> dp(s.length()+1,vector<string>(t.length()+1,""));
        
        for(int i=0;i<s.length();i++) {
            for(int j=0;j<t.length();j++) {
                if(s[i] == t[j]) {
                    dp[i+1][j+1] = dp[i][j] + s[i];
                }else{
                    dp[i+1][j+1] = dp[i+1][j].size() > dp[i][j+1].size() ? dp[i+1][j] : dp[i][j+1];
                }
            }
        }
        
        return dp[s.length()][t.length()];
    }
};

