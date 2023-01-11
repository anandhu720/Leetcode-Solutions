class Solution {
public:
    bool dfs(int mid,vector<int> &nums,int th) {
        int sum = 0;
        for(auto it : nums) {
            sum += it/mid;
            if(it%mid != 0) sum += 1;
        }
        return sum <= th;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left = 1,right = 1e6;
        
        int ans = right;
        while(left <= right) {
            int mid = left + (right - left)/2;
            if(dfs(mid,nums,threshold)) {
                ans = mid;
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        return ans;
    }
};