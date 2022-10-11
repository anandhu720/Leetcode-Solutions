class Solution {
public:
    int maxSatisfaction(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int sum = 0;
        
        int curr = 0;
        int ans = 0;
        for(int i=nums.size()-1;i>=0;i--) {
            
            curr += sum + nums[i];
            sum += nums[i];
            
            ans = max(ans,curr);
        }
        
        return ans;
    }
};