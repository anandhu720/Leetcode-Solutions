class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total = 0;
        for(auto it : nums) total += it;
        
        x = total - x;
        
        int left = 0, right = 0;
        int sum = 0;
        
        int res = INT_MAX;
        
        while(right < nums.size()) {
            
            sum += nums[right];
            
            while(left <= right and sum > x) {
                sum -= nums[left];
                left++;
            }
            
            if(sum == x) {
                int temp = nums.size() - (right-left+1);
                res = min(res,temp); 
            }
            
            right++;
            
        }
        
        return res == INT_MAX ? -1 : res;
    }
};