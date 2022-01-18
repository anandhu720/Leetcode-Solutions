# Dynamic programming
<h3>Time = O(n^2) Space = O(n) </h3>

```
class Solution {
public:
int jump(vector<int>& nums) {
vector<int> dp(nums.size(),10001);
dp[nums.size()-1] = 0;
for(int i=nums.size()-2;i>=0;i--){
for(int k=1;k<=nums[i];k++){
if(i+k < nums.size())
dp[i] = min(dp[i],1+dp[i+k]);
}
}
return dp[0];
}
};
```
