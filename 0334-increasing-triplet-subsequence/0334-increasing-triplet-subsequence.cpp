class Solution {
public:
    //LIS T.C. : O(nlongk)
    bool increasingTriplet(vector<int>& nums) {
        vector<int> dp;
        for(auto x : nums) {
            auto it = lower_bound(dp.begin(),dp.end(),x);
            if(it == end(dp)) {
                dp.push_back(x);
                if(dp.size() == 3) return true;
                continue;
            }
            if(*it > x) 
                *it = x;
        }
        
        return false;
    }
};