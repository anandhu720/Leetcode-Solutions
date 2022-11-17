class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int running = 1;
        int maxi = INT_MIN;
        for(int i=0;i<nums.size();i++) {
            running *= nums[i];
            maxi = max(maxi,running);
            if(running == 0) running = 1;
        }
        running = 1;
        for(int i=nums.size()-1;i>=0;i--) {
            running *= nums[i];
            maxi = max(maxi,running);
            if(running == 0) running = 1;
        }
        return maxi;
    }
};