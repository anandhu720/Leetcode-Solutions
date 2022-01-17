class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reacable = 0;
        
        for(int i=0;i<nums.size();i++){
            // if(reacable >= nums.size() -1) return true;
            if(reacable < i) return false;
            reacable = max(reacable,i+nums[i]);
        }
        return true;
    }
};