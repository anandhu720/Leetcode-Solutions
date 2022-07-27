class Solution {
private:
    static bool cmp(vector<int> &a,vector<int> &b) {
	    return a[1] > b[1];
    }
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(),cmp);
        vector<int> dp(pairs.size()+1,0);
        
        int prev = INT_MIN;
        for(int index=pairs.size()-1;index>=0;index--) {
            
            int take = 0,notTake = 0;
            if(prev < pairs[index][0]) {
                take = 1 + dp[index+1];
                prev = pairs[index][1];
            }
        
            notTake = dp[index+1];
        
            dp[index] = max(take,notTake);
        }
        
        return dp[0];
    }
};