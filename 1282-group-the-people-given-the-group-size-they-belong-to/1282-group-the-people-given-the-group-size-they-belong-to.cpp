class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& nums) {
        unordered_map<int,vector<int>> umap;
        
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++) {
            umap[nums[i]].push_back(i);
            
            if(umap[nums[i]].size() == nums[i]) {
                ans.push_back(umap[nums[i]]);
                umap.erase(nums[i]);
            }
        }
        
        for(auto it : umap) {
            ans.push_back(it.second);
        }
        
        return ans;
    }
};