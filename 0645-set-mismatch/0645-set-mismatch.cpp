class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> hash(nums.size()+1,0);
        
        for(auto it : nums) {
            hash[it]++;
        }
        
        vector<int> ans(2,0);
        
        for(int i=1;i<hash.size();i++) {
            if(hash[i] == 2) ans[0] = i;
            if(hash[i] == 0) ans[1] = i;
        }
        
        return ans;
    }
};