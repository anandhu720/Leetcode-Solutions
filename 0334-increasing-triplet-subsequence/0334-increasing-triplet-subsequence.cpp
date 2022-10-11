class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int firstMin = INT_MAX,secondMin = INT_MAX;
        for(auto x : nums) {
            if(x <= firstMin) firstMin = x;
            else if(x <= secondMin) secondMin = x;
            else return true;
        }
        
        return false;
    }
};