```
class Solution {
public:
bool dfs(int mid,vector<vector<int>> &nums) {
for(int i=0;i<nums.size();i++) {
if(mid < nums[i][1]) return false;
mid -= nums[i][0];
}
return mid >= 0;
}
int minimumEffort(vector<vector<int>>& nums) {
sort(nums.begin(),nums.end(),[&](vector<int> p,vector<int> q){
if(p[1]-p[0] > q[1]-q[0])
return true;
return false;
});
int left = 0,right = 1e9;
int res = 1e5;
while(left <= right) {
int mid = left + (right - left)/2;
if(dfs(mid,nums)) {
res = mid;
right = mid - 1;
}else{
left = mid + 1;
}
}
return res;
}
};
```