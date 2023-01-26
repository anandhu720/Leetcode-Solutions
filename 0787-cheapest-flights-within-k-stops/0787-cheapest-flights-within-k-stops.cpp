class Solution {
private:
    unordered_map<int,vector<pair<int,int>>> umap;
    vector<vector<int>> dp;
    int dfs(int src,int d,int k) {
        
        if(src == d) return 0;
        if(k == 0) return 1e9;
        
        if(dp[src][k] != -1) return dp[src][k];
        
        int ans = 1e9;
        for(auto it : umap[src]) {
            ans = min(ans,it.second + dfs(it.first,d,k-1));
        }
        
        return dp[src][k] = ans;
    }
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        for(auto it : flights) {
            umap[it[0]].push_back({it[1],it[2]});
        }
        
        dp.resize(101,vector<int>(101,-1));
        int ans = dfs(src,dst,k+1);
        
        return ans >= 1e9 ? -1 : ans;
    }
};