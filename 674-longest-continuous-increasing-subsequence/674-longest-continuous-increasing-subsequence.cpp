class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int answer  = 1;
        int count = 1;
        
        for(int i=1;i<nums.size();i++) {
            if(nums[i-1] < nums[i]) {
                count++;
                answer = max(count,answer);
            }else{
                count = 1;
            }
        }
        
        return answer;
    }
};