class Solution {
public:
    // vector<vector<vector<int>>> dp;
    vector<vector<int>> dp;
    int minSideJumps(vector<int>& obstacles) {
        // dp.resize(obstacles.size()+1,vector<vector<int>>(4,vector<int>(2,-1)));
        dp.resize(obstacles.size()+1,vector<int>(4,-1));
        return dfs(1,2,true,obstacles);
    }
    
    int dfs(int index,int currline,bool changeLine,vector<int> &obstacles) {
        
        if(index == obstacles.size()) return 0;
        if(!changeLine and obstacles[index] == currline) return 1e9;
        
        // if(dp[index][currline][changeLine] != -1) return dp[index][currline][changeLine];
        if(dp[index][currline] != -1) return dp[index][currline]; 
        
        int ans = INT_MAX;
        if(obstacles[index] != currline)
            return dfs(index+1,currline,true,obstacles);
        
        int mini = INT_MAX;
        for(int line = 1;line <= 3;line++) {
            if(currline == line) continue;
            
            if(obstacles[index-1] != line and changeLine) {
                mini = min(mini,1 + dfs(index,line,false,obstacles));
            }
        }
        
        return dp[index][currline] = mini;
    }
};