class Solution {
public:
    int dp[101][101];
    int videoStitching(vector<vector<int>>& clips, int time) {
        sort(clips.begin(),clips.end());
        
        if(clips[0][0] > 0) return -1;
        
        memset(dp,-1,sizeof(dp));
        
        int ans = dfs(0,0,clips,time);
        
        return ans >= 1e9 ? -1 : ans;
    }
    
    int dfs(int index,int len,vector<vector<int>> &nums,int time) {
        
        if(index == nums.size()) {
            if(len >= time) return 0;
            return 1e9;
        }
        
        if(dp[index][len] != -1) return dp[index][len];
        
        int take = 1e9,notTake = 1e9;
        if(len >= nums[index][0]) {
            take = 1 + dfs(index+1,max(len,nums[index][1]),nums,time);
        }
        
        notTake = dfs(index+1,len,nums,time);
        
        return dp[index][len] = min(take,notTake);
    }
};