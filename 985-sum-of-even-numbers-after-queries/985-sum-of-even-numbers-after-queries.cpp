class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        long long sum = 0;
        for(auto it : nums) {
            if(it%2 == 0) sum += it;
        }
        
        vector<int> ans;
        for(auto it : queries) {
            int index = it[1];
            int val = it[0];
            
            if(nums[index]%2 == 0) sum -= nums[index];
            
            nums[index] += val;
            
            if(nums[index]%2 == 0) sum += nums[index];
            
            ans.push_back(sum);
        }
        
        return ans;
    }
};