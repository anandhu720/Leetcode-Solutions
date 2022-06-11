class Solution {
public:
    unordered_map<char,unordered_map<char,char>> umap;
    bool matchReplacement(string s, string sub, vector<vector<char>>& mappings) {
        
        for(auto map : mappings) {
            umap[map[0]][map[1]] = 1;
        }
        
        for(int i=0;i<s.length();i++) {
            if(check(i,s,sub)) return true;
        }
        
        return false;
    }
    
    bool check(int index,string &s,string &sub) {
        
        if(index + sub.size() > s.size()) return false;
        
        int k = 0;
        for(int i=index;i<index+sub.size();i++) {
            if(sub[k] == s[i] or umap[sub[k]][s[i]])
                k++;
            else return false;
        }
        
        return true;
    }
};