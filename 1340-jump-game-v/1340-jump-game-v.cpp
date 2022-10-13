class Solution {
public:
    vector<int> dp;
    int dfs(int index,vector<int> &nums,int d) {
        
        if(dp[index] != -1) return dp[index];
        
        int i = index-1;
        int left = 0;
        while(i >= 0 and i >= index-d) {
            if(nums[i] >= nums[index]) break;
            if(nums[i] < nums[index])
                left = max(left,1 + dfs(i,nums,d));
            i--;
        }
        
        i = index+1;
        int right = 0;
        while(i < nums.size() and i <= index+d) {
            if(nums[i] >= nums[index]) break;
            if(nums[i] < nums[index])
                right = max(right,1+dfs(i,nums,d));
            i++;
        }
        
        return dp[index] = max(left,right);
        
    }
    int maxJumps(vector<int>& arr, int d) {
        
        int ans = INT_MIN;
        dp.resize(arr.size(),-1);
        for(int i=0;i<arr.size();i++) {
            ans = max(ans,dfs(i,arr,d));
        }
        
        return ans+1;
    }
};