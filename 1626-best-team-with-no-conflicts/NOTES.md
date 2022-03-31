class Solution {
public:
int bestTeamScore(vector<int>& score, vector<int>& age) {
int n = age.size();
vector<pair<int,int>> vpp;
for(int i=0;i<n;i++)
vpp.push_back({age[i],score[i]});
​
// if you are not sorting it here then ready to put some extra checks while
// calculating maxScore
sort(vpp.begin(),vpp.end());
vector<int> dp;
int ans = 0;
for(int i=0;i<n;i++){
int maxScore = 0;
int currAge = vpp[i].first;
int currScore = vpp[i].second;
for(int j=0;j<i;j++){
int prevAge = vpp[j].first;
int prevScore = vpp[j].second;
if(currScore < prevScore and currAge != prevAge) continue;
maxScore = max(dp[j],maxScore);
}
dp.push_back(maxScore + currScore);
ans = max(ans,dp.back());
}
return ans;
}
};