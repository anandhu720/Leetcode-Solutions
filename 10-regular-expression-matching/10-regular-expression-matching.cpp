class Solution {
public:
    //memization - Time = O(n*m) n = s.length(), m = p.length()
    bool dfs(int i,int j,string &s,string &p,map<pair<int,int>,bool> &cache){
        
        if(cache[{i,j}]) return cache[{i,j}];
        
        if(i >= s.length() && j >= p.length()) return true;
        if(j >= p.length()) return false;
        
        bool match = false;
        if(i < s.length() && (s[i] == p[j] || p[j] == '.')) match = true;
        
        if(j+1 < p.length() && p[j+1] == '*'){ //here we have 2 choices
            return cache[{i,j}] =  (dfs(i,j+2,s,p,cache) ||  //dont use *
                    (match && dfs(i+1,j,s,p,cache)));  //use * 
        }
        if(match) return cache[{i,j}] =  dfs(i+1,j+1,s,p,cache);
        return cache[{i,j}] = false;
            
    }
    bool isMatch(string s, string p) {
        map<pair<int,int>,bool> cache;
        return dfs(0,0,s,p,cache);
    }
};