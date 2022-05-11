class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size());
        vector<int> suffix(nums.size());
        
        int product = 1;
        for(int i=0;i<nums.size();i++) {
            prefix[i] = product;
            product *= nums[i];
        }
        
        product = 1;
        for(int i=suffix.size()-1;i>=0;i--) {
            suffix[i] = product;
            product *= nums[i];
        }
        
        
        vector<int> ans(nums.size());
        for(int i=0;i<ans.size();i++) {
            ans[i] = prefix[i]*suffix[i];
        }
        
        return ans;
    }
};