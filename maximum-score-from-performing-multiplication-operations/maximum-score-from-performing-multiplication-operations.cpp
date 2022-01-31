class Solution {
public:
    int solve(int index,int left,int right,vector<int> &nums,vector<int> &mult,vector<vector<int>> &map){
        int n = nums.size();
        int m = mult.size();
        
        //base case
        if(index >= m) return 0;
        
        if(map[index][left] != -1) return map[index][left];
        
        int x = mult[index];
        
        map[index][left] = max(x*nums[left]+solve(index+1,left+1,right,nums,mult,map),
                  x*nums[right]+solve(index+1,left,right-1,nums,mult,map));
        return map[index][left];
    }
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int l = 0,r = nums.size()-1;
        vector<vector<int>> map(multipliers.size(),vector<int>(multipliers.size(),-1));
        return solve(0,l,r,nums,multipliers,map);
    }
};