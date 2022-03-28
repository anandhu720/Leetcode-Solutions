

class Solution {
public:
    int helper(int i, bool back , int a ,int b, int x,unordered_set<int> &mp,vector<vector<int>> &dp) {
        if(i == x)
            return 0;
        if(i<0 || i>6000 || back>=2 || mp.find(i)!=mp.end())
            return 1e9;
        if(dp[i][back] != -1) 
            return dp[i][back];
        
        dp[i][back] = 1+helper(i+a,0,a,b,x,mp,dp); //go forward
        
        if(!back) //cannot go consecutively backwards more than 1
        {
        dp[i][back] = min(dp[i][back] , helper(i-b,1,a,b,x,mp,dp)+1);  
        
        }
        return dp[i][back];
    }
    

    int minimumJumps(vector<int>& forbidden, int a, int b, int x) {
        unordered_set<int> mp;
        for(int i=0;i<forbidden.size();i++){
            mp.insert(forbidden[i]);
        }
        vector<vector<int>> dp(6001,vector<int> (2,-1));
        int ans = helper(0,0,a,b,x,mp,dp);
        if(ans>1e9) 
               return -1;
        return ans;               
    }
};