using extra space
​
```
class Solution {
public:
char findTheDifference(string s, string t) {
unordered_map<int,int> map;
for(auto i : s) map[i]++;
for(int i=0;i<t.length();i++){
if(map.find(t[i]) == map.end()) return t[i];
map[t[i]]--;
if(map[t[i]] == 0) map.erase(t[i]);
}
return '-1';
}
};
```