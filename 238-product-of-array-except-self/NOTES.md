```
class Solution {
public:
vector<int> productExceptSelf(vector<int>& nums) {
unordered_map<int,int> umap;
vector<int> ans(nums.size());
for(int i=0;i<nums.size();i++) umap[i] = nums[i];
for(int i=0;i<nums.size();i++) {
int prefix = 1;
int suffix = 1;
for(auto it : umap) {
if(it.first < i) prefix *= it.second;
else if(it.first > i) suffix *= it.second;
}
ans[i] = prefix*suffix;
}
return ans;
}
};
```