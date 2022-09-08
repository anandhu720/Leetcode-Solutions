class Solution {
public:
    int dfs(vector<int> &nums,int start) {
        int ans = 0;
        int n = nums.size();
        for(int i=start;i<n;i+=2) {
            if(i == 0 and nums[i] <= nums[i+1]) {
                ans += (nums[i+1] - nums[i]) + 1;
                nums[i+1] = nums[i] - 1;
            }else if(i == n-1 and nums[i] <= nums[i-1]) {
                ans += (nums[i-1] - nums[i]) + 1;
                nums[i-1] = nums[i] - 1;
            }else if(i > 0 and i < n-1 ) {
                if(nums[i] <= nums[i-1]) {
                    ans += (nums[i-1] - nums[i]) + 1;
                    nums[i-1] = nums[i] - 1;
                }
                if(nums[i] <= nums[i+1]) {
                    ans += (nums[i+1] - nums[i]) + 1;
                    nums[i+1] = nums[i] - 1;     
                }
            }
        }
        
        return ans;
    }
    int movesToMakeZigzag(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 0;
        vector<int> tmp = nums;
        int odd = dfs(tmp,1);
        int even = dfs(nums,0);
        
        return min(odd,even);
        
    }
};