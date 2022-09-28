class Solution {
private:
    bool check(int node,vector<vector<int>> &adj,vector<int> &vis,vector<int> &path,vector<int> &c) {
        
        vis[node] = 1;
        path[node] = 1;
        c[node] = 0;
        
        for(auto child : adj[node]) {
            if(vis[child] == 0) {
                if(check(child,adj,vis,path,c)) return true;
            }else if(path[child] == 1) return true;
        }
        
        path[node] = 0;
        c[node] = 1;
        
        return false;
    }
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        
        vector<int> vis(graph.size(),0);
        vector<int> path(graph.size(),0); 
        vector<int> c(graph.size(),0);
        for(int i=0;i<graph.size();i++) {
            if(vis[i] == false)
               check(i,graph,vis,path,c);
        }
        
        vector<int> ans;
        for(int i=0;i<c.size();i++) {
            if(c[i] == 1) ans.push_back(i);
        }
        
        
        return ans;
    }
};