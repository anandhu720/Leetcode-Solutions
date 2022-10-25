```
class Solution {
public:
//Floyd Warshall Algo
int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
vector<vector<int>> matrix(n,vector<int>(n,1e9));
for(auto it : edges) {
matrix[it[0]][it[1]] = it[2];
matrix[it[1]][it[0]] = it[2];
}
for(int i=0;i<n;i++) matrix[i][i] = 0;
for(int k=0;k<n;k++) {
for(int i=0;i<n;i++) {
for(int j=0;j<n;j++) {
matrix[i][j] = min(matrix[i][j],matrix[i][k] + matrix[k][j]);
}
}
}
int cnt = 0;
int currMin = INT_MAX;
for(int i=0;i<n;i++) {
int currCount = 0;
for(int j=0;j<n;j++) {
if(matrix[i][j] <= distanceThreshold) currCount++;
}
if(currCount <= currMin) {
cnt = i;
currMin = currCount;
}
}
return cnt;
}
};
```