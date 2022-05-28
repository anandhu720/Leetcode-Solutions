class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int neededSum = n*(n+1)/2;
        int currentSum = 0;
        for(auto i : nums) currentSum += i;
        
        return abs(neededSum - currentSum);
    }
};