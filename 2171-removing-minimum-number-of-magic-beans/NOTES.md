brute force
​
```
class Solution {
public:
long long minimumRemoval(vector<int>& beans) {
long long minRemoval = INT_MAX;
for(int i=0;i<beans.size();i++){
long long localRemoval = 0;
for(int j=0;j<beans.size();j++){
if(beans[j] == beans[i])
continue;
else if(beans[j] < beans[i]) localRemoval += beans[j];
else localRemoval += (beans[j] - beans[i]);
}
minRemoval = min(minRemoval,localRemoval);
}
return minRemoval == INT_MAX ? 0 : minRemoval;
}
};
```