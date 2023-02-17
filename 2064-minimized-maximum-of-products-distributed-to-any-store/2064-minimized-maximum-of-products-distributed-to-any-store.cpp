class Solution {
private:
    bool dfs(int mid,vector<int> &nums,int n) {
        int cnt = 0;
        for(int i=0;i<nums.size();i++) {
            cnt += nums[i]/mid;
            if(nums[i]%mid != 0) cnt += 1;
        }
        
        return cnt <= n;
    }
public:
    int minimizedMaximum(int n, vector<int>& nums) {
        int left = 1,right = 1e9;
        
        int res = 0;
        while(left <= right) {
            int mid = left + (right - left)/2;
            if(dfs(mid,nums,n)) {
                res = mid;
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        
        return res;
    }
};