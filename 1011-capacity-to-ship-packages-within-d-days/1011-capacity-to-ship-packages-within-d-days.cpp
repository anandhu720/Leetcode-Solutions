class Solution {
public:
    bool dfs(int mid,vector<int> &nums,int days) {
        int cnt = 0;
        int sum = 0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] > mid) return false;
           if(sum + nums[i] > mid) {
               cnt++;
               sum = nums[i];
           } else{
               sum += nums[i];
           }
            
        }  
        
        return cnt+1 <= days;
    }
    int shipWithinDays(vector<int>& nums, int days) {
        int left = 0,right = 0;
        for(auto it : nums) right += it;
        left = right/days;
        if(right%days != 0) left += 1;
        
        int ans = right;
        while(left <= right) {
            int mid = left + (right - left)/2;
            if(dfs(mid,nums,days)) {
                ans = mid;
                right = mid -1;
            }else{
                left = mid + 1;
            }
        }
        
        return ans;
    }
};