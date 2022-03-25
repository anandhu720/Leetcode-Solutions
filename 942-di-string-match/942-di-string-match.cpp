class Solution {
public:
    vector<int> diStringMatch(string s) {
        int left = 0,right = s.length();
        vector<int> ans;
        for(int i=0;i<s.length();i++) {
            if(s[i] == 'I') ans.push_back(left++);
            else ans.push_back(right--);
        }
        
        ans.push_back(right);
        
        return ans;
    }
};