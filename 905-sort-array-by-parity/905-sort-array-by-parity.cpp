class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int slow = 0;
        
        for(int fast=0;fast<nums.size();fast++) {
            if(nums[fast]%2 == 0) {
                swap(nums[fast],nums[slow]);
            
                slow++;
            }
        }
        return nums;
    }
};