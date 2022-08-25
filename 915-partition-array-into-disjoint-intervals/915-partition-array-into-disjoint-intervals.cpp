class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int x = -1;
        int end = nums.size();
        for(int i=0;i<end;i++) {
            if(x < nums[i]) {
                x = nums[i];
                end = nums.size()-1;
                while(end >= i) {
                    if(nums[end] < x)
                        break;
                    end--;
                }
            }
        }
        
        if(end == -1) return 1;
        return end+1;
    }
};