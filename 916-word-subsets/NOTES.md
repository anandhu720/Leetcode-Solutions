```
class Solution {
public:
//Brute force
vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
vector<string> ans;
for(auto it : words1) {
string s = it;
bool flag = true;
for(auto it : words2) {
unordered_map<char,int> umap;
for(auto it : s) umap[it]++;
string p = it;
for(auto x : p) {
if(umap.find(x) == umap.end()){
flag = false;
break;
}
else {
umap[x]--;
if(umap[x] == 0) umap.erase(x);
}
}
}
if(flag == true) ans.push_back(s);
}
return ans;
}
};
```