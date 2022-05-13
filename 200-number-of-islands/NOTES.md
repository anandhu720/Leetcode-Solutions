Depth first search
```
class Solution {
public:
int numIslands(vector<vector<char>>& grid) {
int m = grid.size(),n = grid[0].size();
int count = 0;
for(int i=0;i<m;i++) {
for(int j=0;j<n;j++) {
if(grid[i][j] == '1') {
count++;
eraseAll(i,j,grid);
}
}
}
return count;
}
void eraseAll(int i,int j,vector<vector<char>> &grid) {
if(i < 0 or j < 0 or i >= grid.size() or j >= grid[0].size() or grid[i][j] == '0')
return;
grid[i][j] = '0';
eraseAll(i+1,j,grid);
eraseAll(i-1,j,grid);
eraseAll(i,j+1,grid);
eraseAll(i,j-1,grid);
}
};
```