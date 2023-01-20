class Solution {
private:
    set<vector<int>> ans;
public:
    void dfs(int index,vector<int> &tmp,vector<int> &nums) {
        if(tmp.size() >= 2) {
            ans.insert(tmp);
        }
        
        if(index == nums.size()) return;
        
        
        if(tmp.back() <= nums[index]) {
            tmp.push_back(nums[index]);
            dfs(index+1,tmp,nums);
            tmp.pop_back();
        }
        
        dfs(index+1,tmp,nums);

    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++) {
            vector<int> tmp;
            tmp.push_back(nums[i]);
            dfs(i+1,tmp,nums);
        }
        
        vector<vector<int>> rem(ans.begin(),ans.end());
        return rem;
        
    }
};