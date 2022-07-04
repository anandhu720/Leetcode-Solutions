class Solution {
public:
    int dp[101][101];
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        unordered_map<int,vector<pair<int,int>>> adj;
        
        memset(dp,-1,sizeof(dp));
        
        for(auto it : flights) {
            adj[it[0]].push_back({it[1],it[2]});
        }
        
        int ans = dfs(src,dst,k+1,adj);
        
        return ans >= 1e9 ? -1 : ans;
        
    }
    
    int dfs(int src,int dst,int k,unordered_map<int,vector<pair<int,int>>>&adj) {
        
        if(src == dst) return 0;
        if(k == 0) return 1e9;
    
        if(dp[src][k] != -1) return dp[src][k];
        
        int ans = 1e9;
        for(auto it : adj[src]) {
            ans = min(ans,it.second + dfs(it.first,dst,k-1,adj));
        }

        return dp[src][k] = ans;
        
    }
};