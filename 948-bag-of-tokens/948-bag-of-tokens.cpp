class Solution {
public:
    int bagOfTokensScore(vector<int>& nums, int power) {
        int score = 0;
        sort(nums.begin(),nums.end());
        
        int left = 0,right = nums.size()-1;
        
        while(left < right) {
            if(power >= nums[left]) {
                power -= nums[left];
                score += 1;
                left++;
            }else if(power < nums[left] and score > 0) {
                power += nums[right];
                score -= 1;
                right--;
            }else break;
        }
        
        if(left == right and power >= nums[left]) score += 1; 
        
        return score;
    }
};