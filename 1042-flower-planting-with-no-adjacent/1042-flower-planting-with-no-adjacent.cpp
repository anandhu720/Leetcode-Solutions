class Solution {
public:
    unordered_map<int,vector<int>> umap;
    void dfs(int node,vector<int> &vis,vector<int> &ans) {
        
        vis[node] = 1;
        unordered_set<int> uset;
        for(auto it : umap[node]) {
            if(ans[it-1] != 0) uset.insert(ans[it-1]);
        }
        
        for(int k=1;k<=4;k++) {
            if(uset.count(k) == 0) {
                ans[node-1] = k;
                break;
            }
        }
        
        for(auto it : umap[node]) {
            if(vis[it] == 0)
                dfs(it,vis,ans);
        }
    }
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        for(auto it : paths) {
            umap[it[0]].push_back(it[1]);
            umap[it[1]].push_back(it[0]);
        }
        
        vector<int> vis(n+1,0);
        vector<int> ans(n,0);
        
        for(int i=1;i<=n;i++) {
            if(vis[i] == 0)
                dfs(i,vis,ans);
        }
        
        return ans;
        
    }
};