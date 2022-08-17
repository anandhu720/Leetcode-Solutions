class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int,int> umap;
        
        for(auto it : trips) {
            umap[it[1]] += it[0];
            umap[it[2]] -= it[0];
        }
        
        for(auto it : umap) {
            capacity -= it.second;
            if(capacity < 0) return false;
        }
        
        return true;
    }
};