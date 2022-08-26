class Solution {
public:
    char findKthBit(int n, int k) {
        string s = "0";
        dfs(s,n);
        return s[k-1];
    }
    
    void dfs(string &s,int n) {
        if( n == 0) return;
        
        int index = s.length()-1;
        
        s.push_back('1');
        
        for(int i=index;i>=0;i--) {
            if(s[i] == '0') s.push_back('1');
            else s.push_back('0');
        }
        
        dfs(s,n-1);
        
    }
};
