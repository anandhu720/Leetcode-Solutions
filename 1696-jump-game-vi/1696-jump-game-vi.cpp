class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> dp(n,0);
        multiset<int> ms;
        
        ms.insert(nums[n-1]);
        
        dp[n-1] = nums[n-1];
        
        for(int i=n-2;i>=0;i--) {
            if(n-i-1 > k) ms.erase(ms.find(dp[i+k+1]));
            
            dp[i] = nums[i] + *rbegin(ms);
            
            ms.insert(dp[i]);
        }
        
        return dp[0];
    }
};