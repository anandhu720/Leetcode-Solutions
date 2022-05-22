class Solution {
public:
    int minimumLines(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        
        if(nums.size() == 1) return 0;
        
        int lines = 0;
        long double prevSlope =  1.79769e+308;
        
        for(int i=1;i<nums.size();i++) {
            long double x = (nums[i][0] - nums[i-1][0]);
            long double y= (nums[i][1] - nums[i-1][1]);
            
            long double slope = y/x;
            
            if(prevSlope == slope) continue;
            
            prevSlope = slope;
            lines += 1;
            
        }
        
        return lines;
    }
};