class Solution {
public:
    unordered_map<int,vector<int>> umap;
    vector<int> dp;
    int dfs(int node,vector<int> &vis,vector<int> &time) {
        vis[node] = 1;
        
        int ans = 0;
        for(auto it : umap[node]) {
            if(vis[it] == 0) {
                ans = max(ans,dfs(it,vis,time));
            }else{
                ans = max(ans,dp[it]);
            }
        }
        
        return dp[node] = ans + time[node-1];
    }
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        vector<int> indegree(n+1,0);
        dp.resize(n+1,-1);
        for(auto it : relations) {
            indegree[it[0]]++;
            umap[it[1]].push_back(it[0]);
        }
        
        int ans = 0;
        vector<int> vis(n+1,0);
        for(int i=1;i<indegree.size();i++) {
            if(indegree[i] == 0) {
                ans = max(ans,dfs(i,vis,time));
            }
        }
        
        return ans;
        
    }
};
