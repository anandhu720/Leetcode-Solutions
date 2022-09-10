class Solution {
public:
    int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen) {
        vector<vector<vector<int>>> dp(nums.size()+1,vector<vector<int>>(2,vector<int>(2,-1)));
        return dfs(0,nums,firstLen,secondLen,dp);
    }
    
    int dfs(int index,vector<int> &nums,int fl,int sl,vector<vector<vector<int>>> &dp) {
        
        if(index > nums.size()) return 0;
        
        if(fl == 0 and sl == 0) return 0;
        
        bool f = true,s = true;
        if(fl == 0) f = false;
        if(sl == 0) s = false;
        
        if(dp[index][f][s] != -1) return dp[index][f][s];
        
        int notSelect = dfs(index+1,nums,fl,sl,dp);
        int flSelect = 0,slSelect = 0;
        
        if(fl != 0) {
            int flSum = 0;
            int i = index;
            while(i < nums.size() and i < index+fl) {
                flSum += nums[i];
                i++;
            }
            flSelect = flSum + dfs(index+fl,nums,0,sl,dp);
        }
        
        if(sl != 0) {
            int slSum = 0;
            int i = index;
            while(i < nums.size() and i < index+sl) {
                slSum += nums[i];
                i++;
            }
            slSelect = slSum + dfs(index+sl,nums,fl,0,dp);
        }
        
        return dp[index][f][s] = max(notSelect,max(flSelect,slSelect));
        
    }
};