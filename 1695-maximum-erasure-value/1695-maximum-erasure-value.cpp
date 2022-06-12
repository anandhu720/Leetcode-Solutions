class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int> umap;
        
        int left = 0, right = 0;
        int sum = 0;
        int res = INT_MIN;
        
        while(right < nums.size()) {
            
            sum += nums[right];
            
            if(umap.find(nums[right]) != umap.end()) {
                while(left <= umap[nums[right]]) {
                    sum -= nums[left];
                    left++;
                }
            }
            
            umap[nums[right]] = right;
            
            res = max(sum,res);
            right++;
            
        }
        
        return res;
    }
};