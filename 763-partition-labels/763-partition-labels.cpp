class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> map;
        
        for(int i=0;i<s.length();i++) {
            map[s[i]] = i;
        }
        
        int end = 0;
        int prev = -1;
        vector<int> ans;
        
        for(int i=0;i<s.length();i++) {
            end = max(end,map[s[i]]);
            if(end == i) {
                ans.push_back(end - prev);
                prev = end;
            }
        }
        
        return ans;
    }
};

