class Solution {
public:
    int numDecodings(string s) {
        unordered_map<int,int> cache;
        cache[s.length()] = 1;
        return dfs(0,s,cache);
    }
    int dfs(int index,string &s,unordered_map<int,int> &cache){
        
        if(cache[index]) return cache[index];
        
        if(s[index] == '0') return 0;
        
        
        int res = dfs(index+1,s,cache);
        
        if(index+1 < s.length()){
            if((int)s[index] - 48 == 1 || ((int)s[index] - 48 == 2 && (int)s[index+1] - 48 <= 6))
                res += dfs(index+2,s,cache);
        }
        
        return cache[index] = res;
    }
};