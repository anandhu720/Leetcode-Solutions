class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int x = nums.size() - k;
        return nums[x];
    }
};