class Solution {
public:
    int candy(vector<int>& rating) {
        
        vector<int> nums(rating.size(),1);
        
        for(int i=1;i<nums.size();i++) {
            if(rating[i] > rating[i-1])
                nums[i] = nums[i-1] + 1;
        }
        
        for(int i=nums.size()-2;i>=0;i--) {
            if(rating[i] > rating[i+1])
                nums[i] = max(nums[i],nums[i+1]+1);
        }
        
        int result = 0;
        for(auto it : nums) result += it;
        
        return result;
    }
};