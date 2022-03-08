class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        if(k < nums[0]) return (long long)k*(k+1)/2;
        long long ans = (long long)(nums[0]-1)*nums[0]/2;
        k -= nums[0]-1;
        
        int i;
        for(i=1;i<nums.size();i++){
            if(nums[i-1] == nums[i]) continue;
            if(k == 0) break;
            if(nums[i] - nums[i-1] - 1 > k){
                int n = (nums[i-1] + k) - (nums[i-1] + 1) + 1;
                long long temp = (nums[i-1] + k) + (nums[i-1] + 1);
                temp = (temp*n) / 2;
                ans += temp;
                return ans;
            }else if(nums[i] - nums[i-1] - 1 > 0){
                int n = (nums[i] - 1) - (nums[i-1] + 1) + 1;
                long long temp = (nums[i]-1)+(nums[i-1] + 1);
                temp = (temp*n) / 2;
                ans += temp;
                k -= n; 
            }
        }
        
        
        if(k != 0){
            long long temp = (nums[i-1] + k) + (nums[i-1] + 1);
            temp = (k*temp)/2;
            ans += temp;
        }
        
        return ans;
    }
};