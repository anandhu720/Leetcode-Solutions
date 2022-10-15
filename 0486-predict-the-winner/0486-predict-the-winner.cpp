class Solution {
public:
    int sum = 0;
    bool PredictTheWinner(vector<int>& nums) {
        for(auto it : nums) sum += it;
        if(nums.size() == 1) return true;
        return dfs(0,nums.size()-1,nums,0);
    }
    
    bool dfs(int left,int right,vector<int> &nums,int score = 0) {
        
        if(left > right) {
            if(score >= sum - score) return true;
            return false;
        }
        
        bool l = dfs(left+2,right,nums,score+nums[left]) and
                 dfs(left+1,right-1,nums,score+nums[left]);
        
        bool r = dfs(left+1,right-1,nums,score+nums[right]) and
                 dfs(left,right-2,nums,score+nums[right]);
        
        return l or r;
        
    }
    
};