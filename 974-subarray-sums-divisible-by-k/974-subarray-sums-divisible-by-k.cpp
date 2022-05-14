class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> umap; // reminder -> freq
        int sum = 0;
        int count = 0;
        
        umap[0] = 1;
        
        for(int i=0;i<nums.size();i++) {
            
            sum += nums[i];
            int rem = sum%k;
            
            if(rem < 0) {
                rem += k;
            }
            
            if(umap.find(rem) != umap.end()) {
                count += umap[rem];
                umap[rem] += 1;
            }else umap[rem] = 1;
            
        }
        
        return count;
    }
};