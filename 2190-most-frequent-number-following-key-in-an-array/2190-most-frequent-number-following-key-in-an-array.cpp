class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int,int> umap;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1] == key)
                umap[nums[i]]++;
        }
        
        pair<int,int> maxi = {0,0};
        for(auto it : umap){
            if(maxi.second < it.second){
                maxi.first = it.first;
                maxi.second = it.second;
            }
        }
        
        return maxi.first;
    }
};