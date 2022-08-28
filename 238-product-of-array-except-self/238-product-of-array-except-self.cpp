class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int noOfZeros = 0;
        int neg = 0;
        for(auto it : nums) {
            if(it < 0) neg++;
            if(it == 0) noOfZeros++;
        }
        if(noOfZeros > 1) return ans;
        else if(noOfZeros == 1) {
            return tmp(nums);
        }
        
        long long prod = 1;
        for(auto it : nums) prod *= it;
        
        prod = abs(prod);
        
        for(int i=0;i<nums.size();i++) {
            int tmp = prod / abs(nums[i]);
            if(neg%2 == 0) {
                if(nums[i] < 0) ans[i] = -1*tmp;
                else ans[i] = tmp;
            }else{
                if(nums[i] < 0) ans[i] = tmp;
                else ans[i] = -1*tmp;
            }
        }
        
        return ans;
    }
    
    vector<int> tmp(vector<int> &nums) {
        vector<int> ans(nums.size(),0);
        
        int index = 0;
        int product = 1;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] == 0) {
                index = i;
                continue;
            }
            
            product *= nums[i];
        }
        
        ans[index] = product;
        return ans;
    }
};