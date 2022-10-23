class Solution {
public:
    long long dfs(long long mid,vector<int> &nums,vector<int> &cost) {

        long long res = 0;
        for(int i=0;i<nums.size();i++) {
            res += (long long)abs(mid - nums[i]) * cost[i];
        }
        
        return res;
    }
    long long minCost(vector<int>& nums, vector<int>& cost) {
        long long left = INT_MAX;
        long long right = INT_MIN;
        long long res = dfs(1,nums,cost);
        
        for(int i=0;i<nums.size();i++) {
            left = min((long long)nums[i],left);
            right = max((long long)nums[i],right);
        }
        

        
        while(left <= right) {
            long long mid = left + (right - left)/2;
            
            long long x = dfs(mid,nums,cost);
            long long y = dfs(mid+1,nums,cost);
            res = min(x,y);
            if(x < y) {
                right = mid - 1;
            }else {
                left = mid + 1;
            }
        }
        
        
        return res;
        
    }
};