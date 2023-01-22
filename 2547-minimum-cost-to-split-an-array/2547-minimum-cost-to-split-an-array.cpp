class Solution {
private:
    vector<int> dp;
    int dfs(int index,vector<int> &nums,vector<vector<int>> &tval,int k) {
        if(index >= nums.size()) return 0;

        if(dp[index] != -1) return dp[index];
        
        int ans = INT_MAX;
        for(int i=index;i<nums.size();i++) {
            
            int next = dfs(i+1,nums,tval,k);
            
            ans = min(ans,tval[index][i]+k+next);
            
        }
        return dp[index] = ans;
    }
public:
    int minCost(vector<int>& nums, int k) {
        vector<vector<int>> tval(1001,vector<int>(1001,0));
        
        for(int i=0;i<nums.size();i++) {
            vector<int> tmp(1001,0);
            int cnt = 0;
            
            for(int j=i;j<nums.size();j++) {
                tmp[nums[j]]++;
                
                if(tmp[nums[j]] == 2) cnt+=2;
                else if(tmp[nums[j]] > 2) cnt++;
                
                tval[i][j] = cnt;
            }
            
        }
        
        
        dp.resize(nums.size(),-1);
        return dfs(0,nums,tval,k);
    }
};

