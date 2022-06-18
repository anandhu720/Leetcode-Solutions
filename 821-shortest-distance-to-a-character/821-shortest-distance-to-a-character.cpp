class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        unordered_set<int> uset;
        
        for(int i=0;i<s.length();i++) {
            if(s[i] == c) uset.insert(i);
        }
        
        vector<int> res(s.length(),0);
        
        for(int i=0;i<res.size();i++) {
            int dist = INT_MAX;
            for(auto it : uset) {
                dist = min(dist,abs(i - it));
            }
            res[i] = dist;
        }
        
        return res;
        
    }
};