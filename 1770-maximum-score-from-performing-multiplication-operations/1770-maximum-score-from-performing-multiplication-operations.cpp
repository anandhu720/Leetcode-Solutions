class Solution {
public:

    vector<vector<int>> dp;
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        dp.resize(multipliers.size()+1,vector<int>(multipliers.size()+1,INT_MIN));
        return dfs(0,0,nums.size()-1,nums,multipliers);
    }
    
    int dfs(int index,int left,int right,vector<int> &nums,vector<int> &mul) {
        
        if(index == mul.size()) return 0;
        
        if(dp[index][left] != INT_MIN) return dp[index][left];
        
        int addToLeft = 0,addToRight = 0;
        

        //take left value
        addToLeft = mul[index] * nums[left] + dfs(index+1,left+1,right,nums,mul);
        addToRight = mul[index]*nums[right] + dfs(index+1,left,right-1,nums,mul);
        
        return dp[index][left] =max(addToLeft,addToRight);
        
    }
};

