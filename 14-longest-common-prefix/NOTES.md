### Time = O(n*n)
```
class Solution {
public:
string longestCommonPrefix(vector<string>& strs) {
string prefix = strs[0];
for(int i=1;i<strs.size();i++){
string localPrefix = "";
if(strs[i].length() == 0 && prefix.length() != 0) return "";
for(int j=0;j<strs[i].length();j++){
if(prefix[j] != strs[i][j]){
if(i == 0) return "";
prefix = localPrefix;
break;
}
localPrefix += strs[i][j];
if(j == strs[i].length()-1) prefix = localPrefix;
}
}
return prefix;
}
};
```