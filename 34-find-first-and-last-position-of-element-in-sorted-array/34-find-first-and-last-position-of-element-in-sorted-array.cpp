class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int low = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        int up = lower_bound(nums.begin(),nums.end(),target+1) - nums.begin();
        
        if(low < nums.size() and nums[low] == target) return {low,up-1};
        
        return {-1,-1};
    }
};