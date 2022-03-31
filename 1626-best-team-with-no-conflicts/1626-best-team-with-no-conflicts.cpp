class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int n = ages.size();
        vector<pair<int,int>> vpp;  //<age,score>
        
        for(int i=0;i<n;i++) {
            vpp.push_back({ages[i],scores[i]});
        }
        
        sort(vpp.begin(),vpp.end());
        
        vector<int> dp;
        
        for(int i=0;i<n;i++) {
            int maxScore = 0;
            
            int currAge = vpp[i].first;
            int currScore = vpp[i].second;
            
            for(int j=0;j<i;j++) {
                int prevAge = vpp[j].first;
                int prevScore = vpp[j].second;
                
                if(currScore < prevScore and currAge != prevAge) continue;
                maxScore = max(dp[j],maxScore);
            }
            dp.push_back(maxScore + currScore);
        }
        
        int ans = INT_MIN;
        for(auto it : dp) {
            ans = max(ans,it);
        }
        
        return ans;
    }
};