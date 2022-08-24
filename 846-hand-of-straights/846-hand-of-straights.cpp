class Solution {
public:
    bool isNStraightHand(vector<int>& nums, int gs) {
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++) {
            
            if(nums[i] != -1) {
                int dist = nums[i] + gs - 1;
                int currVal = nums[i];
                nums[i] = -1;
                int j = i+1;
                while(j < nums.size() and currVal + 1 <= dist) {
                    if(nums[j] == currVal + 1) {
                        nums[j] = -1;
                        currVal = currVal + 1;
                    }
                    j++;
                }
            
                if(currVal < dist) return false; 
            }
            
        }
        return true;
    }
};