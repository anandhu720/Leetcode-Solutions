class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        sort(changed.begin(),changed.end());
        unordered_map<int,int> umap;
        for(auto it : changed) {
            umap[it]++;
        }
        
        vector<int> ans;
        
        for(auto it : changed) {
            if(umap[it] == 0) continue;
            
            umap[it]--;
            ans.push_back(it);
            
            if(umap.find(it*2) != umap.end() and umap[it*2] > 0) {
                umap[it*2]--;
            }else{
                return {};
            }
        }
        
        return ans;
    }
};