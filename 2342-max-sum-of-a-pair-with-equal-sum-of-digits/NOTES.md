```
class Solution {
public:
int maximumSum(vector<int>& nums) {
int maxSum = -1;
unordered_map<int,vector<int>> umap;
for(auto it : nums) {
int currNum = it;
int currSum = 0;
while(currNum) {
currSum += currNum%10;
currNum /= 10;
}
if(umap.find(currSum) == umap.end()) {
umap[currSum].push_back(it);
}else{
if(umap[currSum].size() == 1) {
umap[currSum].push_back(it);
if(umap[currSum][0] < umap[currSum][1])
swap(umap[currSum][0],umap[currSum][1]);
}else{
if(umap[currSum][1] < it) umap[currSum][1] = it;
else if(umap[currSum][0] < it) umap[currSum][0] = it;
if(umap[currSum][0] < umap[currSum][1])
swap(umap[currSum][0],umap[currSum][1]);
}
}
}
for(auto it : umap) {
if(it.second.size() < 2) continue;
int localSum = 0;
localSum += it.second[0] + it.second[1];
maxSum = max(maxSum,localSum);
}
return maxSum;
}
};
```