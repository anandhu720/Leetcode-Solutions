DP
​
```
class Solution {
public:
/*
* Time = O(nk) Space = O(n)
* method = DP
*/
bool canJump(vector<int>& nums) {
vector<bool> dp(nums.size(),false);
dp[nums.size()-1] = true;
for(int i=nums.size()-2;i>=0;i--){
for(int k=0;k<=nums[i];k++){
if(i+k < nums.size() && dp[i+k] == true){
dp[i] = true;
break;
}
}
}
return dp[0];
}
};
```