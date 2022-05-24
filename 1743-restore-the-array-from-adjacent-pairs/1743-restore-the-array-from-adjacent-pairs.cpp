class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& ap) {
        unordered_map<int,vector<int>> m;
        
        for(auto it : ap) {
            m[it[0]].emplace_back(it[1]);
            m[it[1]].emplace_back(it[0]);
        }
        
        vector<int> res;
        for(auto it : m) {
            if(it.second.size() == 1) {
                res.emplace_back(it.first);
                res.emplace_back(it.second[0]);
                break;
            }
        }
        
        while(res.size() <= ap.size()) {
            
            auto tail = res.back(); 
            auto prev = res[res.size()-2];
            auto next = m[tail];
            if(next[0] == prev) res.emplace_back(next[1]);
            else res.emplace_back(next[0]);
            
        }
        
        return res;
    }
};