class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& nums, int k) {
        vector<int> dp(nums.size()+1,0);
        
        for(int index=nums.size()-1;index>=0;index--) {
            int cut = index;
            int maxi = INT_MIN;
            int x = nums[index];
            while(cut < nums.size() and cut < index+k) {
                x = max(x,nums[cut]);
                int ans = x*(cut-index+1) + dp[cut+1];
                cut = cut+1;
                maxi = max(maxi,ans);
            
            }
            dp[index] = maxi;
        }
        
        return dp[0];
        
    }
};