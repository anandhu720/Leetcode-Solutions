class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        vector<int> dp(arr.size(),-1);
        return dfs(0,arr,k,dp);
    }
    
    int dfs(int index,vector<int> &nums,int k,vector<int> &dp) {
        
        if(index >= nums.size()) return 0;
        
        if(dp[index] != -1) return dp[index];
        
        int cut = index;
        int maxi = INT_MIN;
        int x = nums[index];
        while(cut < nums.size() and cut < index+k) {
            
            x = max(x,nums[cut]);
            int ans = x*(cut-index+1) + dfs(cut+1,nums,k,dp);
            cut = cut+1;
            maxi = max(maxi,ans);
            
        }
        
        return dp[index] = maxi;
    }
};