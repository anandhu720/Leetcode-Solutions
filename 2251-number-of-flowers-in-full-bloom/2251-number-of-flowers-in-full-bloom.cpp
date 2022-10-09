class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& persons) {
        map<int,int> umap;
        
        for(auto it : flowers) {
            umap[it[0]]++;
            umap[it[1] + 1]--;
        }
        
        vector<int> ans(persons.size(),0);
        
        vector<pair<int,int>> nums;
        for(int i=0;i<persons.size();i++) nums.push_back({persons[i],i}); //value ,index
        
        sort(nums.begin(),nums.end());
        
        int overlap = 0;
        int i = 0;
        for(auto it : umap) {
            
            while(i < nums.size() and it.first > nums[i].first) {
                ans[nums[i].second] = overlap;
                i++;
            }
            
            if(i == nums.size()) break;
            
            overlap += it.second;
            
        }
        
        return ans;
        
    }
};