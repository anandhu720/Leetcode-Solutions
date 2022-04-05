##### Linear Search
​
```
class Solution {
public:
int peakIndexInMountainArray(vector<int>& nums) {
for(int i=1;i<nums.size();i++) {
if(nums[i -1] > nums[i])
return i-1;
}
return -1;
}
};
```