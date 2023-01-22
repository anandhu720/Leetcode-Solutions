class Solution {
private:
    vector<int> dp;
    int dfs(int index,vector<int> &nums,int k) {
        if(index >= nums.size()) return 0;
        unordered_map<int,int> uset;
        int count = 0;
        
        if(dp[index] != -1) return dp[index];
        
        int ans = INT_MAX;
        for(int i=index;i<nums.size();i++) {
                      
            uset[nums[i]]++;
            
            if(uset[nums[i]] > 2) count++;
            else if(uset[nums[i]] == 2) count+=2;
            

            int next = dfs(i+1,nums,k);
            
            ans = min(ans,count+k+next);
            
        }
        return dp[index] = ans;
    }
public:
    int minCost(vector<int>& nums, int k) {
        dp.resize(nums.size(),-1);
        return dfs(0,nums,k);
    }
};

