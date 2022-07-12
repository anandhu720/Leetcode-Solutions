class Solution {
private:
    bool dfs(int i,vector<int> &nums,vector<int> &subsets,int length,int k) {
        
        if(i == nums.size()) return true;
        
        for(int j=0;j<k;j++) {
            if(subsets[j] + nums[i] <= length) {
                int x = j;
                while(--x >= 0) {
                    if(subsets[x] == subsets[j])
                        break;
                }
                if(x != -1) continue;
                subsets[j] += nums[i];
                if(dfs(i+1,nums,subsets,length,k)) return true;
                subsets[j] -= nums[i];
            }
        }
        
        return false;
    }
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sum = 0;
        for(auto it : nums) sum += it;
        
        if(sum%k != 0) return false;
        
        int length = sum/k;
        
        vector<int> subsets(k,0);
        
        sort(nums.begin(),nums.end(),greater<int>());
        
        return dfs(0,nums,subsets,length,k);
    }
};