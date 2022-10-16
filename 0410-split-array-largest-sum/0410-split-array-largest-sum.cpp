class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int left = *max_element(nums.begin(),nums.end());
        int right = 0;
        for(auto it : nums) right += it;
        
        int ans = right;
        while(left <= right) {
            int mid = left + (right - left)/2;
            
            if(blackbox(mid,nums,k)) {
                ans = mid;
                right = mid-1;
            }else{
                left = mid+1;
            }
        }
        
        return ans;
    }
    
    int blackbox(int mid,vector<int> &nums,int k) {
        int cnt = 1;
        int sum = 0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] > mid) return false;
            if(sum + nums[i] > mid) {
                cnt++;
                sum = nums[i];
            }else{
                sum += nums[i];
            }
        }
        
        return cnt <= k;
    }
};