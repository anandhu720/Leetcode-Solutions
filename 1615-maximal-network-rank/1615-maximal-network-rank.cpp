class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        unordered_map<int,unordered_set<int>> umap;
        
        for(auto it : roads) {
            umap[it[0]].insert(it[1]);
            umap[it[1]].insert(it[0]);
        }
        
        int maxi = INT_MIN;
        
        for(int i=0;i<n;i++) {
            int u = i;
            for(int v=0;v<n;v++) {
                if(u == v) continue;
                
                int ans = umap[u].size() + umap[v].size();
                
                if(umap[u].count(v) > 0) ans = ans-1;
                
                maxi = max(maxi,ans);
            }
        }
        
        return maxi;
    }
};