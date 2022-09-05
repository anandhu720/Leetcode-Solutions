class Solution {
public:
    int mod = 1e9 + 7;
    unordered_map<long long,long long> cache;
    int numDecodings(string s) {
        return dfs(0,s);
    }
    
    long long dfs(int index,string &s) {
        
        if(index == s.length()) return 1;
        if(index > s.length()) return 0;
        
        if(cache.count(index) > 0) return cache[index];
                
        if(s[index] == '0') return 0;
        
        long long res = 0;
        if(s[index] == '*')
            res = 9*dfs(index+1,s)%mod;
        else 
            res = dfs(index+1,s)%mod;
        
        long long tmp = 0;
        if(index+1 < s.length()) {
            if(s[index] == '*' and s[index+1] == '*') {
                tmp += 15*dfs(index+2,s)%mod;
            }else if((s[index] == '1' or s[index] == '2') and s[index+1] == '*') {
                tmp += (s[index] == '1' ? 9 : 6) * dfs(index+2,s)%mod;
            }else if(s[index] == '1' or (s[index] == '2' and s[index+1] - '0' <= 6)) {
                tmp += dfs(index+2,s)%mod;
            }else if(s[index] == '*') {
                tmp += (s[index+1] - '0' <= 6 ? 2 : 1)*dfs(index+2,s)%mod;
            }
        }
        
        res = (res+tmp) % mod;
                        
        return cache[index] = res;
    }
};
