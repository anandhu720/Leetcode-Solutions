```
class Solution {
public:
int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
sort(stations.begin(),stations.end());
vector<int> dp(target,-1);
int ans = dfs(0,stations,startFuel,0,target,dp) ;
return ans >= 1e9 ? -1 : ans;
}
int dfs(int index,vector<vector<int>> &st,int currFuel,int currDis,int target,vector<int> &dp) {
if(currDis + currFuel >= target) {
return 0;
}
if(index == st.size()) return 1e9;
if(dp[currFuel] != -1) return dp[currFuel];
int ans = 1e9;
for(int i=index;i<st.size();i++) {
if(currDis + currFuel >= st[i][0]) {
int d = st[i][0] - currDis;
ans = min(