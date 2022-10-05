class Solution {
private:
    vector<vector<int>> dp;
    bool dfs(int index,string &s,int open) {
        
        if(index == s.length()) {
            return open == 0;
        }
        
        if(open < 0) return false;
        
        if(dp[index][open] != -1)
            return dp[index][open];

        
        bool star = false;
        if(s[index] == '(')
            return dfs(index+1,s,open+1);
        else if(s[index] == ')')
            return dfs(index+1,s,open-1);
        else
            star = dfs(index+1,s,open+1) or dfs(index+1,s,open-1) or dfs(index+1,s,open);
        
        return dp[index][open] = star; 
        
    }
public:
    bool checkValidString(string s) {
        dp.resize(s.length(),vector<int>(s.length(),-1));
        return dfs(0,s,0);   
    }
};