return maxlen;
}
int dfs(int i,int j,vector<vector<int>> &grid,int prev) {
if(i<0 or i>=grid.size() or j<0 or j>=grid[0].size() or grid[i][j] <= prev)
return 0;
if(dp[i][j] != -1) {
return dp[i][j];
}
​
prev = grid[i][j];
​
int down = dfs(i+1,j,grid,prev);
int up = dfs(i-1,j,grid,prev);
int right = dfs(i,j+1,grid,prev);
int left = dfs(i,j-1,grid,prev);
return dp[i][j] = 1 + max(down,max(up,max(right,left)));
}
};
```