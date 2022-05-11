class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        
        int first = 1,last = 1;
        
        vector<int> ans(nums.size(),1);
        for(int i=0;i<n;i++) {
            
            ans[i] *= first;  
            first *= nums[i];
            
            ans[n-1-i] *= last;
            last *= nums[n-1-i];
        }
        
        return ans;
    }
};