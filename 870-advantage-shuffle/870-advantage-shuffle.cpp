class Solution {
public:
    vector<int> advantageCount(vector<int>& nums, vector<int>& nums2) {
        multiset<int> s(nums.begin(),nums.end());
        for(int i=0;i<nums2.size();i++) {
            auto p = *s.rbegin() <= nums2[i] ? s.begin() : s.upper_bound(nums2[i]);
            nums[i] = *p;
            s.erase(p);
        }
        
        return nums;
    }
};
