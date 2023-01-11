class Solution {
private:
    unordered_map<int,vector<int>> umap;
    int dfs(int node,vector<int> &vis,vector<bool> &hasApple) {
        
        vis[node] = 1;
        int ans = 0;
        for(auto it : umap[node]) {
            if(vis[it] == 0) {
                ans += dfs(it,vis,hasApple);
            }
        }
        
        if(hasApple[node] == true or ans > 0) ans += 2;
        return ans;
    }
public:
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        
        for(auto it : edges) {
            umap[it[0]].push_back(it[1]);
            umap[it[1]].push_back(it[0]);
        }
        
        vector<int> vis(n,0);
        int val = dfs(0,vis,hasApple) - 2;
        return val >= 0 ? val : 0;
        
    }
};