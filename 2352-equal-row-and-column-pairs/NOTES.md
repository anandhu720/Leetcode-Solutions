```
class Solution {
public:
int equalPairs(vector<vector<int>>& grid) {
int res = 0;
for(int i=0;i<grid.size();i++) {
for(int j=0,k=0;j<grid.size();j++) {
for(k=0;k<grid.size();k++) {
if(grid[i][k] != grid[k][j])
break;
}
res += k == grid.size();
}
}
return res;
}
};
```