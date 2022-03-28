class Solution {
public:
    //binary search
    bool search(vector<int>& nums, int target) {
       int lo = 0, ho = nums.size()-1;
        while(lo <= ho){
            int mid = lo+(ho-lo)/2;
            if(nums[mid] == target) return true;
            //here we have duplicates to avoid it
            if((nums[lo] == nums[mid]) and (nums[ho] == nums[mid])) {
                lo++;
                ho--;
            }
            else if(nums[lo] <= nums[mid]){
                
                if(nums[mid] >= target && nums[lo] <= target) ho = mid -1;
                else lo = mid+1;
                
            }else if (nums[mid] <= nums[ho]){
                
                if(nums[mid] <= target && nums[ho] >= target) lo = mid+1;
                else ho = mid-1;
                
            }
        }
        return false;
    }
};