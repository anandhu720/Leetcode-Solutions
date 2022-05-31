```
class Solution {
public:
//Time = O(n*n)
int mctFromLeafValues(vector<int>& arr) {
int sum = 0;
while(arr.size() > 1) {
int minIndex = min_element(arr.begin(),arr.end()) - arr.begin();
int left = minIndex-1 >= 0 ? arr[minIndex-1] : INT_MAX;
int right = minIndex+1 < arr.size() ? arr[minIndex+1] : INT_MAX;
sum += arr[minIndex] * min(left,right);
arr.erase(arr.begin()+minIndex);
}
return sum;
}
};
```