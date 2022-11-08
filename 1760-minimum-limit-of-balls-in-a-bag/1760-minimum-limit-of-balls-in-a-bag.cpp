class Solution {
public:
    bool dfs(long long mid,vector<int> &nums,int k) {
        
        for(int i=0;i<nums.size();i++) {
            if(k < 0) return false;
            if(nums[i] <= mid) continue;
            
            int node = nums[i];
            
            k -= (ceil((double)node/mid) - 1);
        }
  
        
        return k >= 0 ? true : false;
    }
    int minimumSize(vector<int>& nums, int maxOperations) {
        long long left = 1;
        long long right = 0;
        for(auto it : nums) right += it;
        
        long long res = right;
        while(left <= right) {
            long long mid = left + (right - left)/2;
            
            
            if(dfs(mid,nums,maxOperations)) {
                res = mid;
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        
        return res;
    }
};