class Solution {
public:
    int dfs(int left,string &s,unordered_set<string> &uset,vector<int> &dp) {
        
        if(left >= s.length()) return 0;
        if(dp[left] != -1) return dp[left];
        
        int ans = INT_MIN;
        for(int right=left;right<s.length();right++) {
            
            if(right == s.length()-1) {
                if(uset.count(s.substr(left,right-left+1)) > 0){
                    // cout<<s.substr(left,right-left+1)<<endl;
                    ans = max(ans,1 + dfs(right+1,s,uset,dp));
                }else
                    ans = max(ans,INT_MIN + dfs(right+1,s,uset,dp));
            }

            if(uset.count(s.substr(left,right-left+1)) > 0)
                ans = max(ans,1 + dfs(right+1,s,uset,dp));
        }
        
        return dp[left] = ans;
    }
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        unordered_set<string> uset(words.begin(),words.end());
        
        vector<string> ans;
        for(auto it : words) {
            vector<int> dp(it.length(),-1);
            int cnt = dfs(0,it,uset,dp);
            if(cnt >= 2) ans.push_back(it);
        }
        
        return ans;
    }
};