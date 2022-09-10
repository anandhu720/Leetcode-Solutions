class Solution {
public:
    vector<vector<vector<int>>> dp;
    int maxProfit(int k, vector<int>& prices) {
        dp.resize(prices.size()+1,vector<vector<int>>(k+1,vector<int>(2,-1)));
        return dfs(0,prices,k,true);
    }
    int dfs(int i,vector<int> &p,int k,bool canBuy) {
        
        if(i == p.size() or k == 0) return 0;
        
        if(dp[i][k][canBuy] != -1) return dp[i][k][canBuy];
        
        int x = 0,y = 0;
        if(canBuy) {
            x = -p[i] + dfs(i+1,p,k,false);
        }else{
            x = p[i] + dfs(i+1,p,k-1,true);
        }
        
        y = dfs(i+1,p,k,canBuy);
        
        return dp[i][k][canBuy] = max(x,y);
    }
};