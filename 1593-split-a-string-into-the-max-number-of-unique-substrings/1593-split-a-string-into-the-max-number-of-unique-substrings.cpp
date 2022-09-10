class Solution {
public:
    int maxUniqueSplit(string s) {
        unordered_set<string> uset;
        return dfs(0,0,s,uset);
    }
    
    int dfs(int start,int end,string &s,unordered_set<string> &uset) {
        
        if(end == s.length()) return 0;
        
        int ans = 0;
        for(int i=end;i<s.length();i++) {
            string tmp;
            for(int j = start;j<=i;j++) tmp.push_back(s[j]);
            if(uset.find(tmp) == uset.end()) {
                uset.insert(tmp);
                ans = max(ans,1 + dfs(i+1,i+1,s,uset));
                uset.erase(tmp);
            }
        }
        
        return ans;
    }
};