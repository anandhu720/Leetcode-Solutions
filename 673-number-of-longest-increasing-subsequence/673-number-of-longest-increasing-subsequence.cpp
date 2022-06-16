class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(),1);
        vector<int> count(nums.size(),1);
        
        int maxi = 1;
        
        for(int i=0;i<nums.size();i++) {
            for(int j=0;j<i;j++) {
                if(nums[j] < nums[i] and dp[j] + 1 > dp[i]){
                    dp[i] = dp[j] + 1;
                    count[i] = count[j];
                }else if(nums[j] < nums[i] and dp[j] + 1 == dp[i])
                    count[i] += count[j];
            }
            
            maxi = max(maxi,dp[i]);
        }
        
        int length = 0;
        for(int i=0;i<nums.size();i++)
            if(dp[i] == maxi) length += count[i];
       return length; 
    }
};