class Solution {
public:
    int minCost(int n, vector<int>& cuts) {
        cuts.push_back(0);
        cuts.push_back(n);
        
        sort(cuts.begin(),cuts.end());
        
        vector<vector<int>> dp(cuts.size(),vector<int> (cuts.size(),0));
        
        for(int left = dp.size();left>=0;left--) {
            for(int right=0;right<dp.size();right++) {
                if(right - left <= 1) continue;
                
                int mini = INT_MAX;
                for(int index = left+1;index<right;index++) {
                    mini = min(
                        mini,
                        cuts[right] - cuts[left] + dp[left][index]+ dp[index][right]
                    );
                }
                
                dp[left][right] = mini;
            }
        }
        
        return dp[0][dp.size()-1];

    }
};