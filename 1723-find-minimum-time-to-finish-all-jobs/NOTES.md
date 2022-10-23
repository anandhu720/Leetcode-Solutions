```
class Solution {
public:
int backtrack(vector<int> &nums,vector<int> &jobs,int mid,int index) {
if(index == jobs.size()) {
for(int i=0;i<nums.size();i++) {
if(nums[i] > mid) return false;
}
return true;
}
for(int i=0;i<nums.size();i++) {
nums[i] += jobs[index];
if(backtrack(nums,jobs,mid,index+1)) return true;
nums[i] -= jobs[index];
}
return false;
}
int dfs(int mid,vector<int> &jobs,int k) {
vector<int> nums(k,0);
return backtrack(nums,jobs,mid,0);
}
int minimumTimeRequired(vector<int>& jobs, int k) {
int left = 0;
int right = 0;
for(auto it : jobs) right += it;
int res = 0;
while(left <= right) {
int mid = left + (right - left)/2;
if(dfs(mid,jobs,k)) {
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