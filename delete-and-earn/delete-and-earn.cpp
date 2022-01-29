class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        //adding value in map
        unordered_map<int,int> count;
        for(auto it : nums) count[it]++;
        
        //sorting
        sort(nums.begin(),nums.end());
        
        //unique elements
        auto it = unique(nums.begin(),nums.end());
        nums.resize(distance(nums.begin(),it));
        
        int earn1=0,earn2=0;
        
        for(int i=0;i<nums.size();i++){
            int currEarn = nums[i] * count[nums[i]];
            int temp = earn2;
            if(i>0 && nums[i] == nums[i-1]+1){
                earn2 = max(earn1+currEarn,earn2);
                earn1 = temp;
            }else{
                earn2 = currEarn + earn2;
                earn1 = temp;
            }
        }
        
        return earn2;
    }
};