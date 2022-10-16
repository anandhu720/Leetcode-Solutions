class Solution {
public:
    long long blackbox(long long mid,vector<int> &arr) {
        vector<long long> nums;
        for(auto it : arr) nums.push_back(1LL*it);
        for(int i=nums.size()-1;i>0;i--) {
            if(nums[i] > mid) {
                long long diff = nums[i] - mid;
                nums[i-1] += 1LL * diff;
            }
        }
        return (nums[0] <= mid);
    }
    int minimizeArrayValue(vector<int>& nums) {
        long long right = 0;
        for(auto it : nums) right += it;
        long long left = (long long)right/nums.size();
        if(right%nums.size() != 0) left+=1;
        
        long long ans = right;
        while(left <= right) {
            long long mid = left + (right - left)/2;
            if(blackbox(mid,nums)) {
                // cout<<mid<<endl;
                ans = mid;
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        
        return ans;
    }
};