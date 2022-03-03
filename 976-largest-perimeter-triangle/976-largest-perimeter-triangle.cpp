class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        //sorting array for finding maximum lengths in array
        sort(nums.begin(),nums.end());
        
        // finding maximum possible perimeter
        for( int i = nums.size()-1;i>=2;i--)
        {
            // checking traingle's perimeter property
            if(nums[i-2]+nums[i-1]>nums[i])
                return nums[i-2]+nums[i-1]+nums[i];
        }
        return 0;   
    }
};