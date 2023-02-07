class Solution {
public:
    int maximizeWin(vector<int>& nums, int k) {
        int start = 0, ans = 0;
        vector<int> dp(nums.size(),0);
        
        for(int end = 0;end<nums.size();end++) {
            
            while(nums[end] - nums[start] > k)
                start++;
            
            int curr_ans = end - start + 1;
            if(start > 0) curr_ans += dp[start-1];
            
            ans = max(ans,curr_ans);
            
            int prev_maxi = 0;
            if(end > 0) prev_maxi = dp[end - 1];
            
            dp[end] = max(prev_maxi,end - start + 1);
        }
        
        return ans;
    }
};