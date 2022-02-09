class Solution {
public:
    /*
    *   @author Anandha Krishnan
    *   Greedy Approch
    *   Time = O(n) Space = O(1)
    */
    int jump(vector<int>& nums) {
        if(nums.size() == 1) return 0;
        
        int maxJump = nums[0];
        int steps = nums[0];
        int jump = 1;
        
        for(int i=1;i<nums.size()-1;i++){
            maxJump = max(maxJump,i+nums[i]);
            steps--;
            if(steps == 0){
                jump++;
                if(i >= maxJump) return -1; //if we cannot reach last index case (added for extra)
                steps = maxJump - i;
            }
        }
        return jump;
    }
};