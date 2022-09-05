class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int count = 0;
        int left = 0,right = 0;
        int ans = 0;
        
        while(right < nums.size()) {
            count += nums[right]%2 != 0 ? 1 : 0;
            
            while(count > k) {
                count -= nums[left]%2 != 0 ? 1 : 0;
                left++;
            }
            
            if(count == k) {
                ans++;
                int tmp = left;
                while(nums[tmp]%2 == 0) {
                    ans++;
                    tmp++;
                }
            }
            right++;
        }
        
//         while(left < nums.size()) {
//             count -= nums[left]%2 != 0 ? 1 : 0;
            
//             if(count < k) break;
//             if(count == k) ans++;
            
//             left++;
//         } 
        
        return ans;
    }
};