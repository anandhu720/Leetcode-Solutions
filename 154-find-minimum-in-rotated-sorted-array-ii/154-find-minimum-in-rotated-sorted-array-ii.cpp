class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        
        int ans = 1e9;
        
        while(left <= right) {
            
            int mid = left + (right - left) / 2;
            
            ans = min(ans,nums[mid]);
            if(nums[left] == nums[mid]) {
              left++;  
            }else if(nums[left] < nums[mid]) { // left array is sorted
                ans = min(ans,nums[left]);
                left = mid+1; // there is chance a min number exisit in right subarray
            }else if(nums[mid] == nums[right]){
                right--;   
            }else if(nums[mid] < nums[right]){  // right array is sorted
                ans = min(ans,nums[right]);
                right = mid-1;
            }
            
        }
        
        return ans;
    }
};