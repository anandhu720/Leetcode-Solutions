class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        
        int ans = 1e9;
        
        while(left <= right) {
            int mid = left + (right - left) / 2;
            
            ans = min(ans,nums[mid]);
            
            if(nums[left] <= nums[mid]) {
                ans = min(ans,nums[left]);
                left = mid + 1;
            }else {
                ans = min(ans,nums[right]);
                right = mid - 1;
            }
        }
        
        
        return ans;
    }
};