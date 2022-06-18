class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> uset;
        
        for(int i=0;i<s.length();i++) {
            if(s[i] == c) uset.push_back(i);
        }
        
        vector<int> res(s.length(),INT_MAX);
        
        int it = 0;
        
        for(int i=0;i<res.size();i++) {
            if(i > uset[it] and it+1 < uset.size()) it++;
            if(it != 0)
                res[i] = abs(i - uset[it-1]);
            res[i] = min(res[i],abs(i - uset[it]));
        }
        
        return res;
        
    }
};