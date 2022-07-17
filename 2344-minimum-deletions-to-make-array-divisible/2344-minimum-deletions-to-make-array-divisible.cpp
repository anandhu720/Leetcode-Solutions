class Solution {
public:
    int minOperations(vector<int>& num, vector<int>& nums) {

        int gcdValue = nums[0];
        
        for(int i=1;i<nums.size();i++) 
            gcdValue = gcd(gcdValue,nums[i]);

        
        sort(num.begin(),num.end());
        
        for(int i=0;i<num.size() and num[i] <= gcdValue;i++) {
            if(gcdValue % num[i] == 0) return i;
        }
        
        return -1;
    }
};