class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> umap;
        for(auto it : arr) umap[it]++;
        
        unordered_set<int> uset;
        for(auto it : umap) {
            if(uset.count(it.second) > 0) return false;
            uset.insert(it.second);
        }
        
        return true;
    }
};