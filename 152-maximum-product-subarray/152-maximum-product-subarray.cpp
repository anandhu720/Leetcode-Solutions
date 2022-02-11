class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res = INT_MIN;
        for(int i : nums) res = max(res,i);
        
        int currMax = 1,currMin = 1;
        
        for(int i : nums){
            if(i == 0){
                currMax = currMin = 1;
                continue;
            }
            
            int temp = currMax*i;
            currMax = max(temp,max(i,currMin*i));
            currMin = min(temp,min(i,currMin*i));
            
            res = max(res,currMax);
        }
        
        return res;
    }
};