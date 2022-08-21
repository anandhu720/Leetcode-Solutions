brute force
```
class Solution {
public:
string shiftingLetters(string s, vector<vector<int>>& shifts) {
for(auto it : shifts) {
for(int i=it[0];i<=it[1];i++) {
if(s[i] == 'a' and it[2] == 0) s[i] = 'z';
else if(s[i] == 'z' and it[2] == 1) s[i] = 'a';
else {
if(it[2] == 0) s[i] = s[i]-1;
else s[i] = s[i]+1;
}
}
}
return s;
}
};
​
```