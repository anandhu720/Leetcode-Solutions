```
class Solution {
public:
//Time = O(n*n*n)
int minFallingPathSum(vector<vector<int>>& grid) {
for(int i=grid.size()-2;i>=0;i--){
for(int j=0;j<grid[i].size();j++){
int minValue = INT_MAX;
for(int k=0;k<grid[i].size();k++){
if(k == j) continue;
minValue = min(minValue,grid[i+1][k]);
}
grid[i][j] += minValue;
}
}
int result = INT_MAX;
for(int i=0;i<grid[0].size();i++)
result = min(result,grid[0][i]);
return result;
}
};
```