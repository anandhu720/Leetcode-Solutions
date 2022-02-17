class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        unordered_map<int,unordered_map<int,int>> hash;
        return dfs(0,nums,target,hash);
    }
    int dfs(int index,vector<int>& nums,int target,unordered_map<int,unordered_map<int,int>> &hash){
        
        if(index == nums.size()){
            if(target==0)
                return 1;
            return 0;
        }
        
        if(hash.count(index) and hash[index].count(target)) return hash[index][target];
        
        int add = dfs(index+1,nums,target - nums[index],hash);
        int sub = dfs(index+1,nums,target + nums[index],hash);
        
        return hash[index][target] = add+sub;    
    }
};