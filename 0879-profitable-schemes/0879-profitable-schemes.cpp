class Solution {
private:
    int minProfit;
    int mod = 1e9 + 7;
    int dp[101][101][101];
public:
    int profitableSchemes(int N, int MinProfit, vector<int>& group, vector<int>& profit) {
        minProfit = MinProfit;
        memset(dp,-1,sizeof(dp));
        return dfs(0,N,0,group,profit);
    }
    
    int dfs(int index,int n,int currProfit,vector<int> &group,vector<int> &profit) {
        
        if(index >= group.size()) {
            if(currProfit >= minProfit)
                return 1;
            return 0;
        }
        
        if(n < 0) return 0;
        
        if(dp[index][n][currProfit] != -1) return dp[index][n][currProfit];
        
        //rob it
        int ans = 0;
        if(group[index] <= n) {
            ans += dfs(index+1,n-group[index],min(minProfit,currProfit+profit[index]),group,profit)%mod;
            ans = ans%mod;
        }
        
        ans += dfs(index+1,n,currProfit,group,profit)%mod;
        ans = ans%mod;
        
        return dp[index][n][currProfit] = ans;
        
    }
};