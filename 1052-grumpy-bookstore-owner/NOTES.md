```
class Solution {
public:
int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
int firstResult = 0;
for(int i=0;i<customers.size();i++) {
if(grumpy[i] == 0) firstResult += customers[i];
}
int res = firstResult;
int left = 0;
int right = minutes-1;
while(right<customers.size()) {
int localResult = firstResult;
for(int i=left;i<=right;i++) {
if(grumpy[i] == 1) localResult += customers[i];
}
res = max(res,localResult);
right++;
left++;
}
return res;
}
};
```