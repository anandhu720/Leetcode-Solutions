class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int floor = INT_MIN,ceil = INT_MAX;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size()-2;i++){
            if(i == 0 || (i > 0 && nums[i] != nums[i-1])){
                int lo = i+1,ho = nums.size()-1;
                int sum = target - nums[i];
                while(lo < ho){
                    if(nums[lo]+nums[ho] < sum){
                        floor = max(floor,nums[lo]+nums[ho]+nums[i]);
                        lo++;
                    }else{
                        ceil = min(ceil,nums[lo]+nums[ho]+nums[i]);
                        ho--;
                    }
                }
            }
        }
        
        if(floor == INT_MIN) return ceil;
        else if(ceil == INT_MAX) return floor;
        
        if(target-floor < ceil-target) return floor;
        return ceil;
    }
};