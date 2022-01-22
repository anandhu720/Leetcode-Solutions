class Solution {
public:
    int rob1(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return nums[0];
        
        vector<int> dp = nums;
        dp[1] = max(nums[0],nums[1]);
        for(int i=2;i<dp.size();i++){
            dp[i] = max(dp[i-1],dp[i-2]+nums[i]);
        }
        return dp[dp.size()-1];
    }
    
    int rob(vector<int>& nums) {
        
        if(nums.size() == 1) return nums[0];
        
        vector<int> temp1,temp2;
        for(int i=0;i<nums.size();i++){
            if(i != 0) temp1.push_back(nums[i]);
            if(i != nums.size()-1) temp2.push_back(nums[i]);
        }
        
        int x = rob1(temp1);
        int y = rob1(temp2);
        
        return max(x,y);
    }
};