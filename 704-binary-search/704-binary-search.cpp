class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size() == 0) return -1;
        int lo = 0,ho = nums.size()-1;
        while(lo <= ho){
            int mid = (lo+ho)/2;
            
            if(nums[mid] == target) return mid;
            else if(nums[mid] > target) ho = mid-1;
            else lo = mid+1;
        }
        
        return -1;
    }
};