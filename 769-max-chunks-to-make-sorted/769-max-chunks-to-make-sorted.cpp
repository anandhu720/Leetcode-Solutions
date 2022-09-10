class Solution {
public:
    int maxChunksToSorted(vector<int>& nums) {
        int maxi = 0;
        int i = 0;
        bool flag = false;
        int chunk = 0;
        while(i < nums.size()) {
            if(!flag)
                maxi = max(maxi,nums[i]);
            else{
                maxi = nums[i];
                flag = false;
            }
            
            if(i == maxi) {
                chunk++;
                flag = true;
            }
            i++;
        }
        
        return chunk;
    }
};