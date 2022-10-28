class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> umap;
        
        for(auto it : strs) {
            string s = it;
            sort(s.begin(),s.end());
            umap[s].push_back(it);
        }
        
        vector<vector<string>> ans;
        
        for(auto it : umap) {
            ans.push_back(it.second);
        }
        
        return ans;
    }
};