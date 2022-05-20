class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> umap; // { reminder -> index }
        
        umap[0] = -1;
        
        int prefixSum = 0;
        for(int i=0;i<nums.size();i++) {
            prefixSum += nums[i];
            
            if(umap.find(prefixSum%k) != umap.end()) {
                
                int len = abs(umap[prefixSum%k] - i);
                if(len >= 2) return true;
                
            }else umap[prefixSum%k] = i;     

        }
        
        return false;
    }
};