class Solution {
public:
    vector<vector<int>> dp;
    int dfs(int index,vector<vector<int>> &nums,int k) {
        
        if(k == 0) return 0;
        if(index == nums.size()) return -1;
        
        if(dp[index][k] != -1) return dp[index][k];
        
        int take = 0;
        int i = 0;
        
        while(i < nums[index].size() and i+1 <= k) {
            take = max(take,nums[index][i] + dfs(index+1,nums,k-(i+1)));
            i++;
        }
        
        take = max(take,dfs(index+1,nums,k));
        
        return dp[index][k] = take;
    }
    
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        vector<vector<int>> nums;
        dp.resize(piles.size(),vector<int>(k+1,-1));
        for(auto num : piles) {
            
            for(int i=1;i<num.size();i++) {
                num[i] += num[i-1];
            }
            
            nums.push_back(num);
        }
        
        return dfs(0,nums,k);
    }
};

