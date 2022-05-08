### Time = O(nlogn) Space = O(1)
```
class Solution {
public:
int maximumGap(vector<int>& nums) {
// if(nums.size() < 2) return 0;
sort(nums.begin(),nums.end());
int gap = 0;
for(int i=1;i<nums.size();i++) {
gap = max(gap,nums[i] - nums[i-1]);
}
return gap;
}
};
```
​
### Time = O(n) Space = O(n)
```
class Solution {
public:
int maximumGap(vector<int>& nums) {
priority_queue<int> q;
for(auto it : nums) q.push(it);
int i = q.top(); q.pop();
int gap = 0;
while(!q.empty()) {
int temp = i - q.top();
gap = max(gap,temp);
i = q.top(); q.pop();
}
return gap;
}
};
```