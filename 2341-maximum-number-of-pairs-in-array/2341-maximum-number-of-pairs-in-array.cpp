class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
                
        sort(nums.begin(),nums.end());
        
        vector<int> ans(2,0);
        int i;
        for(i=1;i<nums.size();) {
            if(nums[i-1] == nums[i]) {
                ans[0]++;
                i += 2;
            }else{
                ans[1]++;
                i += 1;
            }
        }
        
        if(i == nums.size()) ans[1]++;
        
        return ans;
    }
};