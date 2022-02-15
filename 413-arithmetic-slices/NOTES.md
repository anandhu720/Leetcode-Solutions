```
class Solution {
public:
//Time = O(n*n) Space = O(n)
//Dynamic Programming
int numberOfArithmeticSlices(vector<int>& nums) {
vector<vector<pair<int,int>>> dp(nums.size(),vector<pair<int,int>>(nums.size(),{0,0}));
for(int g=0;g<nums.size();g++){
int i,j;
for(i=0,j=g;j<nums.size();j++,i++){
if(g==0)
dp[i][j] = {0,0};
else if(g==1)
dp[i][j] = {0,nums[j]-nums[j-1]};
else{
if(nums[j] - nums[j-1] == dp[i][j-1].second)
dp[i][j] = {dp[i][j-1].first+1,nums[j] - nums[j-1]};
else
dp[i][j] = {dp[i][j-1].first,INT_MAX};
}
}
}
int ans = 0;
for(int i=0;i<nums.size();i++)
ans+=dp[i][nums.size()-1].first;
return ans;
}
};
```