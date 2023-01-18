class Solution {
public:
    vector<vector<int>> dp;
    int dfs(int index,string &s,bool posStart) {
        
        if(index == s.size()) return 0;
        if(dp[index][posStart] != -1) return dp[index][posStart];
        
        int y = 0;
        if(posStart == false) 
            y = min((s[index] == '1') + dfs(index+1,s,false),dfs(index,s,true));
        else 
            y = (s[index] == '0') + dfs(index+1,s,true);
        
        return dp[index][posStart] = y;
        
    }
    int minFlipsMonoIncr(string s) {
        dp.resize(s.length(),vector<int>(2,-1));
        return dfs(0,s,false);
    }
};

