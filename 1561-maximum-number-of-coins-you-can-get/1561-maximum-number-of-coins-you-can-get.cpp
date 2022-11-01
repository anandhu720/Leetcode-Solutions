class Solution {
public:
    int maxCoins(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int left = 0,right = nums.size()-1;
        
        int ans = 0;
        while(left < right) {
            ans += nums[right-1];
            left++;
            right -= 2;
        }
        
        return ans;
    }
};