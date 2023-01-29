class Solution {
private:
    unordered_map<int,vector<int>> umap;
    double dfs(int node,int target,int t,vector<int> &vis) {
        
        vis[node] = 1;
        
        if(node == target) {
            if(t == 0) return 1.0;
            
            for(auto it : umap[node]) {
                if(vis[it] == 0) return 0.0;
            }
            
            return 1.0;
        }
        
        if(t == 0) return 0.0;
        
        
        double size;
        if(node == 1) size = umap[node].size();
        else{
            size = umap[node].size() - 1;
            if(size == 0) size = 1;
        }
        
        
        double res = 0;
        for(auto it : umap[node]) {
            if(vis[it] == 0) {
                res = max(res,(1/size) * dfs(it,target,t-1,vis));
            }
        }
        
        return res;
    }
public:
    double frogPosition(int n, vector<vector<int>>& edges, int t, int target) {
        for(auto it : edges) {
            umap[it[0]].push_back(it[1]);
            umap[it[1]].push_back(it[0]);
        }
        vector<int> vis(n+1,0);
        return dfs(1,target,t,vis);
    }
};