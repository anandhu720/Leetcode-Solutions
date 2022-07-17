class Solution {
public:
    // Time = O(nlogn) Space = O(1)
    vector<int> numberOfPairs(vector<int>& nums) {
                
        unordered_map<int,int> umap;        
        for(auto it : nums) umap[it]++;
        vector<int> ans(2,0);
        for(auto it : umap) {
            if(it.second%2 != 0) {
                ans[0] += (it.second-1)/2;
                ans[1] += 1;
            }else{
                ans[0] += it.second/2;
            }
        }
        
        return ans;
    }
};