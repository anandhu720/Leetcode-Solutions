class Solution {
    long long MX = 999999999999;
public:
    bool splitString(string s) {
        return dfs(0,s,-1,0);
    }
    
    bool dfs(int index,string &s,long long prev,int cnt) {
        
        if(index == s.length()) return cnt > 1;
        
        bool ans = false;
        long long curr = 0;
        for(int i=index;i<s.length();i++) {
            curr = curr *  10l + s[i] - '0';
            if(curr > MX) break;
            // cout<<curr<<" "<<prev<<endl;
            if(prev == -1 or prev - curr == 1) {
                ans = dfs(i+1,s,curr,cnt+1);
            }
            if(ans) return true;
            if(curr > prev and prev != -1) break;
        }
        
        return ans;
    }
};