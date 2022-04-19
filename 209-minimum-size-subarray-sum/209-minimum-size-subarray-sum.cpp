class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int length = INT_MAX;
        int l=0,r=0;
        
        while(r < nums.size()) {
            
            target -= nums[r];
            if(target <= 0) {
                length = min(length,r-l+1);
                while(target <= 0) {
                    length = min(length,r-l+1);
                    target += nums[l];
                    l++;
                }
            }
            r++;
        }
        
        // if(target <= 0) length = min(length,r-l); //corner case
        
        
        
        return length == INT_MAX ? 0 : length;
    }
};