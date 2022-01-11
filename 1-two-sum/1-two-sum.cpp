class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int diff;
        unordered_map<int,int> m;
        
        for(int i=0;i<nums.size();i++){
            diff = target - nums[i];
            if(m.find(diff) != m.end() && m.find(diff)->second != i)
                return {i,m.find(diff)->second};
            else
                m[nums[i]] = i;
        }
        
        return {-1};
    }
};