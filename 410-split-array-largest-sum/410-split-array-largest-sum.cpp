class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int l = 0,r= 0;
        for(int i=0;i<nums.size();i++) {
            r += nums[i];
            l = max(l,nums[i]);
        }
        
        int res = r;
        
        while(l <= r) {
            int mid = l + (r-l)/2;
            if(canSplit(mid,m,nums)) {
                res = mid;
                r = mid-1;
            }else {
                l = mid+1;
            }
        }
        
        return res;
    }
    
    bool canSplit(int target,int m,vector<int> &nums) {
        int sub = 0;
        int sum = 0;
        for(int i=0;i<nums.size();i++) {
            sum += nums[i];
            if(sum > target) {
                sub++;
                sum = nums[i];
            }
        }
        return sub+1 <= m;
    }
};