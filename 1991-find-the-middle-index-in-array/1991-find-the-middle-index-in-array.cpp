class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int leftSum = 0;
        int rightSum = 0;
        
        for(auto it : nums) rightSum += it;
        
        for(int i=0;i<nums.size();i++) {
            
            rightSum -= nums[i];
            
            if(rightSum == leftSum) return i;
            
            leftSum += nums[i];
        }
        
        return -1;
    }
};