class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> prefix(nums.size(),-1);
        
        int sum = 0;
        for(int i=0;i<nums.size();i++) {
            sum += nums[i];
            prefix[i] = sum;
        }
        
        vector<int> ans(nums.size(),0);
        for(int i=0;i<nums.size();i++) {
            int leftP = i == 0 ? 0 : prefix[i-1];
            int rightP = prefix[nums.size()-1] - prefix[i];
            
            int leftHalf = (nums[i] * i) - leftP;
            int rightHalf = rightP - (nums[i] * (nums.size() - i - 1));
            
            ans[i] = leftHalf + rightHalf;
        }
        
        return ans;
    }
};