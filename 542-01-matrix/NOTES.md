```
class Solution {
public:
vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
int m = mat.size(),n = mat[0].size();
for(int i=0;i<m;i++) {
for(int j=0;j<n;j++) {
if(mat[i][j] == 0) continue;
int length = bfs(i,j,mat);
mat[i][j] = length;
}
}
return mat;
}
int bfs(int r,int c,vector<vector<int>> &grid) {
int grad[] = {1,0,-1,0,1};
queue<pair<int,int>> q;
q.push({r,c});
int length = 0;
while(!q.empty()) {
int size = q.size();
length++;
for(int i=0;i<size;i++) {
auto x = q.front(); q.pop();
for(int k=0;k<4;k++) {
int row = x.first + grad[k];
int col = x.second + grad[k+1];
if(row<0 or col<0 or row>=grid.size() or col>=grid[0].size()) continue;
if(grid[row][col] == 0) return length;
q.push({row,col});
}
}
}
return length;
}
};
```