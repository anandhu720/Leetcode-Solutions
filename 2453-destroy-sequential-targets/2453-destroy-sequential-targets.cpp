class Solution {
public:
    int destroyTargets(vector<int>& nums, int space) {
        map<int,int> umap;
        
        for(auto it : nums) {
            umap[it%space]++;
        }
        
        int ans = INT_MIN;
        int cnt = -1;
        for(auto it : umap) {   
            ans = max(ans,it.second);
        }
        
        sort(nums.begin(),nums.end());
        
        for(auto it : nums) {
            if(umap[it%space] == ans) return it;
        }
        
        return -1;
    }
};