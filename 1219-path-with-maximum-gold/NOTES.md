```
class Solution {
public:
int getMaximumGold(vector<vector<int>>& grid) {
int globalAns = INT_MIN;
vector<vector<bool>> visited(grid.size(),vector<bool>(grid[0].size(),false));
for(int i=0;i<grid.size();i++) {
for(int j=0;j<grid[i].size();j++) {
if(grid[i][j] != 0 or !visited[i][j]) {
vector<int> ans;
dfs(i,j,grid,ans,visited);
int temp = 0;
for(auto i : ans) temp += i;
globalAns = max(temp,globalAns);
}
}
}
return globalAns;
}
void dfs(int i,int j,vector<vector<int>> &grid,vector<int> &ans,vector<vector<bool>> &visited) {
if(i < 0 or j < 0 or i >= grid.size() or j >= grid.size() or visited[i][j] == true or grid[i][j] == 0) {
return;
}
ans.push_back(grid[i][j]);
visited[i][j] = true;
​
dfs(i-1,j,grid,ans,visited); //up
dfs(i+1,j,grid,ans,visited); //down
dfs(i,j-1,grid,ans,visited); //left
dfs(i,j+1,grid,ans,visited); //right
visited[i][j] = false;
}
};
```