class Solution {
private:
    vector<vector<int>> dp;
    int dfs(int r,int c,vector<vector<int>> &grid) {
        
        if(r >= grid.size() or c >= grid[0].size()) 
            return 1e9;
        if(r == grid.size()-1 and c == grid[0].size()-1)
            return grid[r][c];
        
        if(dp[r][c] != -1) return dp[r][c];
        
        int right = grid[r][c] + dfs(r+1,c,grid);
        int down = grid[r][c] + dfs(r,c+1,grid);
        
        return dp[r][c] = min(right,down);
    }
public:
    int minPathSum(vector<vector<int>>& grid) {
        dp.resize(grid.size(),vector<int>(grid[0].size(),-1));
        return dfs(0,0,grid);
    }
};