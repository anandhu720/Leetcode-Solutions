```
class Solution {
public:
vector<int> goodDaysToRobBank(vector<int>& security, int time) {
vector<int> up(security.size(),0),down(security.size(),0);
vector<int> res;
for(int i=down.size()-2;i>=0;i--) {
if(security[i] <= security[i+1]) down[i] = down[i+1] + 1;
}
for(int i=0;i<up.size();i++) {
if(i > 0 and security[i] <= security[i-1]) up[i] = up[i-1] + 1;
if(up[i] >= time and down[i] >= time) res.push_back(i);
}
return res;
}
};
```