```
class Solution {
public:
vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& persons) {
map<int,int> umap;
for(auto it : flowers) {
umap[it[0]]++;
umap[it[1] + 1]--;
}
vector<int> ans;
for(auto person : persons) {
int overlap = 0;
for(auto it : umap) {
if(it.first > person) break;
overlap += it.second;
}
ans.push_back(overlap);
}
return ans;
}
};
```