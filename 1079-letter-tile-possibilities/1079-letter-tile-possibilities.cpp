class Solution {
public:
    unordered_set<string> uset;
    int numTilePossibilities(string tiles) {
        string tmp = "";
        int no = tiles.size();
        dfs(tiles,no,tmp);
        return uset.size();
    }
    
    void dfs(string &s,int &no,string &tmp) {
        
        if(no == 0) {
            if(tmp.size() > 0)
                uset.insert(tmp);
            return;
        }
        
        no = no-1;  
        for(int i=0;i<s.length();i++) {
            if(s[i] != '0') {
                char x = s[i];
                s[i] = '0';
                tmp.push_back(x);
                dfs(s,no,tmp);
                tmp.pop_back();
                s[i] = x;
            }
        }
        dfs(s,no,tmp);
        no = no+1;
        
    }
};