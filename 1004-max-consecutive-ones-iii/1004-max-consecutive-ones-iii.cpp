class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int length = 0;
        int key = k;
        int l = 0,r= 0 ;
        while(r < nums.size()) {
            
            if(nums[r] == 0) {
                if(k == 0) {
                    // cout<<r<<endl;
                    while(k == 0 and l <= r) {
                        if(nums[l] == 0) k++;
                        l++;
                    }
                }
                k--;
            }
            // cout<<r<<" "<<l<<" "<<k<<endl;
            length = max(length,r-l+1);
            r++;
        }
        
        return length;
    }
};