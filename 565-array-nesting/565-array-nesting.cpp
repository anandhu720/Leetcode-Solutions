class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int finalAns = 0;
        vector<bool> hash(nums.size(),false);
        for(int i=0;i<nums.size();i++) {
            int ans = dfs(i,nums,hash);
            finalAns = max(finalAns,ans);
        }
        
        return finalAns;
    }
    
    int dfs(int i,vector<int> &nums,vector<bool> &hash) {
        
        hash[i] = true;
        int count = 1;
        while(hash[nums[i]] == false) {
            count++;
            hash[nums[i]] = true;
            i = nums[i];
        }
        
        return count;
    }
};