class Solution {
public:
    vector<pair<int,int>> grad = {{-2,-1},{-2,1},{-1,-2},{-1,2},{2,-1},{2,1},{1,-2},{1,2}};
    vector<vector<vector<double>>> dp;
    double dfs(int r,int c,int n,int k) {
        
        if(k == 0) return 1.0;
        if(dp[r][c][k] != -1) return dp[r][c][k];
        
        double ans = 0.0;
        for(auto [x,y] : grad) {
            int nr = r + x;
            int nc = c + y;
            
            if(nr >= 0 and nr < n and nc >= 0 and nc < n)
                ans += (1/8.0) * dfs(nr,nc,n,k-1);
        }
        return dp[r][c][k] = ans;
    }
    double knightProbability(int n, int k, int row, int column) {
        dp.resize(n,vector<vector<double>>(n,vector<double>(k+1,-1)));
        return dfs(row,column,n,k);
    }
};