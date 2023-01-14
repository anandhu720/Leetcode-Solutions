class Solution {
public:
    unordered_map<char,vector<char>> umap;
    void dfs(char ch,char &c,vector<int> &vis) {
        
        c = min(c,ch);
        vis[ch - 'a'] = 1;
        for(auto it : umap[ch]) {
            if(vis[it-'a'] == 0)
                dfs(it,c,vis);
        }
    }
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        for(int i=0;i<s1.size();i++) {
            umap[s1[i]].push_back(s2[i]);
            umap[s2[i]].push_back(s1[i]);
        }
        
        string s;
        
        for(auto it : baseStr) {
            char c = '{';
            vector<int> vis(26,0);
            dfs(it,c,vis);
            s.push_back(c);
        }
        
        return s;
        
    }
};


