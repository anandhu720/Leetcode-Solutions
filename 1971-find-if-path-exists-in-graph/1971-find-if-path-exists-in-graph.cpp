class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>> adj;
        for(auto it : edges) {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<bool> visited(n,false);
        return dfs(source,destination,adj,visited);
    }
    
    bool dfs(int source,int destination,unordered_map<int,vector<int>> &adj,vector<bool> &visited)      {
        if(source == destination) return true;
        
        visited[source] = true;
        bool ans;
        for(auto it : adj[source]) {
            if(visited[it] == false) {
                ans =  dfs(it,destination,adj,visited);
            }
            if(ans) return true;
        }
        
        return false;
    }
};