class Solution {
public:
    unordered_map<string,bool> umap;
    bool isScramble(string s1, string s2) {
        return dfs(s1,s2);
    }
    
    bool dfs(string s1,string s2) {
        
        if(s1.size() == 1) return s1 == s2;
        if(s1 == s2) return true;
        
        if(umap.find(s1+s2) != umap.end()) return umap[s1+s2];
        
        int n = s1.size();
        bool ans = false;
        
        
        for(int i=1;i<n;i++) {
            if(
                (dfs(s1.substr(0,i),s2.substr(0,i)) and dfs(s1.substr(i),s2.substr(i))) or
                (dfs(s1.substr(0,i),s2.substr(n-i)) and dfs(s1.substr(i),s2.substr(0,n-i)))
              )
                return umap[s1+s2] = true;
        }
        
        return umap[s1+s2] = false;
    }
};
