```
class Solution {
public:
string smallestEquivalentString(string s1, string s2, string baseStr) {
vector<char> parent(26);
unordered_map<char,unordered_set<char>> umap;
char ch = 'a';
for(int i=0;i<26;i++) {
umap[i+'a'].insert(ch);
parent[i] = ch++;
}
for(int i=0;i<s1.size();i++) {
if(parent[s1[i] - 'a'] == parent[s2[i] - 'a']) {
continue;
}
if(parent[s1[i] - 'a'] < parent[s2[i] - 'a']) swap(s1[i],s2[i]);
​
for(auto it : umap[parent[s1[i] - 'a']]) {
parent[it - 'a'] = parent[s2[i] - 'a'];
umap[parent[s2[i] - 'a']].insert(it);
}
}
string s;
for(auto it : baseStr) {
while(parent[it-'a'] != it) {
it = parent[it - 'a'];
}
s.push_back(it);
}
return s;
}
};
​
```