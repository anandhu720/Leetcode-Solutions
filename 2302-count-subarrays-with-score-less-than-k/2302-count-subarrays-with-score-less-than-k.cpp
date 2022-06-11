class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        
        long long ans = 0;
        int left = 0,right = 0;
        long long sum = 0;
        
        while(right < nums.size()) {
            sum += nums[right];
            long long x = sum * (right - left + 1);
            
            while(left <= right and x >= k) {
                sum -= nums[left];
                left++;
                x = sum * (right - left + 1);
            }
            
            ans += (right - left + 1);
            
            right++;
        }
        
        return ans;
    }
};