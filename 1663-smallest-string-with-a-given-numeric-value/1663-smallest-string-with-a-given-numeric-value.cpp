class Solution {
public:
    string getSmallestString(int n, int k) {
        char c[n];
        
        for(int i=n-1;i>=0;i--) {
            int val = min(26,k-i);
            c[i] = (char)('a' + val - 1);
            k = k-val;
        }
        
        string ans;
        for(auto x : c) ans.push_back(x);
        
        return ans;
    }
};