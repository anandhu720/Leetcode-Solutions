class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        
        vector<int> lis(nums.size(),1);
        
        for(int i=0;i<lis.size();i++) {
            int maxi = 0;
            for(int j=0;j<i;j++) {
                if(nums[j] < nums[i]) {
                    if(lis[j] > maxi) maxi = lis[j];
                }
            }
            lis[i] = maxi + 1;
        }
        
        
        vector<int> lds(nums.size(),1);
        
        for(int i=lds.size()-1;i>=0;i--) {
            int maxi = 0;
            for(int j=lds.size()-1;j>i;j--) {
                if(nums[j] < nums[i]) {
                    if (lds[j] > maxi) maxi = lds[j];
                }
            }
            lds[i] = maxi + 1;
        }
        
        int res = INT_MIN;
        for(int i=0;i<nums.size();i++) {
            if(lis[i] == 1 or lds[i] == 1) continue;
            res = max(res,lis[i] + lds[i] - 1);
        }
        
        return nums.size() - res;
    }
};