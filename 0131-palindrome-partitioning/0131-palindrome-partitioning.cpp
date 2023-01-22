class Solution {
public:
    bool isPalindrome(string& s, int l, int r) {
        while (l < r) {
            if (s[l++] != s[r--]) {
                return false;
            }
        }
        return true;
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        dfs(0,s,ans,temp);
        return ans;
    }
    
    void dfs(int index,string &s,vector<vector<string>> &ans,vector<string> &temp) {
        
        if(index == s.size()){
            ans.push_back(temp);
            return;
        }
        
        for(int i=index;i<=s.size();i++){
            
            if (isPalindrome(s, index, i)) {
                temp.push_back(s.substr(index, i - index + 1));
                dfs(i+1,s,ans,temp);
                temp.pop_back();
            }
   
        }
    }
};