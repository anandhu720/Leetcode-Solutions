#### Brute force
```
class Solution {
public:
bool isPossibleDivide(vector<int>& nums, int k) {
sort(nums.begin(),nums.end());
for(int i=0;i<nums.size();i++) {
if(nums[i] != -1) {
int curr = nums[i];
nums[i] = -1;
int no = k - 1;
int  j = i+1;
while(j < nums.size() and no != 0) {
if(nums[j] == curr+1) {
curr += 1;
nums[j] = -1;
no--;
}
j++;
}
if(no != 0) return false;
}
}
for(auto it : nums) {
if(it != -1) return false;
}
return true;
}
};
```