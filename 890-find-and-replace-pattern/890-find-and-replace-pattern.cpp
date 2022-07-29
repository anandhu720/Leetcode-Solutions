class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string p) {
        vector<string> ans;
                
        for(auto it : words) {
            unordered_map<char,char> umap; 
            vector<int> temp(26,0);
            string s = it;
            
            if(s.length() != p.length()) continue;
            
            int i = 0;
            for(i=0;i<s.length();i++) {
                
                if(umap.find(p[i]) != umap.end()) {
                    if(s[i] != umap[p[i]]) break;
                }else{
                    if(temp[s[i] - 'a'] == 1) break;
                    umap[p[i]] = s[i];
                    temp[s[i] - 'a'] = 1;
                }
            }
            
            if(i == s.length()) ans.push_back(s);
            
        }
        
        return ans;
    }
};