class Solution {
public:
    int maximumWealth(vector<vector<int>>& nums) {
        int mostAmount = INT_MIN;
        for(int i=0;i<nums.size();i++){
            int currTotal = 0;
            for(int j=0;j<nums[i].size();j++){
                currTotal += nums[i][j]; 
            }
            if(mostAmount < currTotal){
                mostAmount = currTotal;
            }
        }
        return mostAmount;
    }
};