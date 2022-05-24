Using dfs
​
```
class Solution {
public:
vector<int> restoreArray(vector<vector<int>>& ap) {
unordered_map<int,vector<int>> m;
for(auto it : ap) {
m[it[0]].emplace_back(it[1]);
m[it[1]].emplace_back(it[0]);
}
int head;
for(auto it : m) {
if(it.second.size() == 1) {
head = it.first;
break;
}
}
unordered_set<int> v;
vector<int> res;
dfs(m,v,head,res);
return res;
}
void dfs(unordered_map<int,vector<int>> &m,unordered_set<int> &v,int head,vector<int> &res){
if(v.find(head) != v.end()) return;
res.emplace_back(head);
v.insert(head);
for(auto it : m[head]) dfs(m,v,it,res);
}
};
```