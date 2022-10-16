class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
         sort(nums.begin(),nums.end());
        
        int left = 1,right = nums[nums.size()-1];
        
       
        int ans = -1;
        while(left <= right) {
            int mid = left + (right - left)/2;
            
            int sum = 0;
            for(auto it : nums) {
                sum += ceil((float)it/mid);
            }
            
            if(sum <= threshold) {
                ans = mid;
                right = mid-1;
            }else{
                left = mid+1;
            }
        }
        
        return ans;
    }
};