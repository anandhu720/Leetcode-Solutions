class Solution {
private:
    vector<int> counter(string &word) {
        vector<int> count(26);
        for(auto it : word) {
            count[it - 'a']++;
        }
        
        return count;
    }
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> count(26,0),tmp(26,0);
        vector<string> ans;
        
        for(auto it : words2) {
            tmp = counter(it);
            for(int i=0;i<26;i++)
                count[i] = max(count[i],tmp[i]);
        }
                
        for(auto s : words1) {
            tmp = counter(s);
            
            int i = 0;
            for(i=0;i<26;i++) {
                if(tmp[i] < count[i]) break;
            }
            
            if(i == 26) ans.push_back(s);
        }
        
        return ans;
    }
};