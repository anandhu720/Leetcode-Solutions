class Solution {
public:
    bool dfs(int mid,vector<int> &nums,int m) {
        int left = nums[0];
        for(int i=1;i<nums.size();i++) {
            if(nums[i] - left >= mid) {
                left = nums[i];
                m--;
            }
        }
        
        
        return m <= 0;
    }
    int maxDistance(vector<int>& nums, int m) {
        sort(nums.begin(),nums.end());

        int left = 0;
        int right = nums[nums.size()-1];
        
        int res = 0;
        while(left <= right) {
            int mid = left + (right - left)/2;
            // cout<<mid<<endl;
            if(dfs(mid,nums,m-1)) {
                res = mid;
                left = mid + 1;
            }else{
                right = mid - 1;
            }
        }
        
        return res;
    }
};