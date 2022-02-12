brute force
​
```
class Solution {
public:
int maxScoreSightseeingPair(vector<int>& values) {
int maxValue = INT_MIN;
for(int i=0;i<values.size();i++){
for(int j=i+1;j<values.size();j++){
maxValue = max(maxValue,values[i]+values[j]+i-j);
}
}
return maxValue;
}
};
```