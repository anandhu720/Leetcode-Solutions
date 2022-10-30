```
class Solution {
public:
int shortestPath(vector<vector<int>>& grid, int k) {
queue<vector<int>> q;
q.push({0,0,k});
vector<int> grad = {0,1,0};
int depth = 0;
while(!q.empty()) {
int size = q.size();
depth++;
for(int i=0;i<size;i++) {
int r = q.front()[0];
int c = q.front()[1];
int d = q.front()[2];
if(r == grid.size()-1 and c == grid[0].size()-1)
return depth-1;
q.pop();
for(int k=0;k<2;k++) {
int nr = r + grad[k];
int nc = c + grad[k+1];
if(nr >= grid.size() or nc >= grid[0].size()) continue;
if(grid[nr][nc] == 1 and d <= 0) continue;
if(grid[nr][nc] == 1)
q.push({nr,nc,d-1});
else
q.push({nr,nc,d});
}
}
}
return -1;
}
};
```