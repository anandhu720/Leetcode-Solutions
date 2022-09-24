class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> res(nums.size(),0);
        int po = 0,ni = 1;
        for(int i=0;i<nums.size();i++) {
            if(nums[i] > 0) {
                res[po] = nums[i];
                po += 2;
            }else{
                res[ni] = nums[i];
                ni += 2;
            }
        }
        
        return res;
    }
};