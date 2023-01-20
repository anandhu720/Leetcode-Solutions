class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        unordered_map<int,vector<int>> adj;
        
        for(int i=0;i<graph.size();i++) {
            for(auto it : graph[i]) {
                adj[i].push_back(it);
            }
        }
        
        vector<int> colored(graph.size(),-1);
        
        for(int i=0;i<colored.size();i++) {
            if(colored[i] == -1) {
                if(!dfs(i,adj,colored,0)) return false;
            }
        }
        
        return true;
    }
    
   bool dfs(int node,unordered_map<int,vector<int>> &adj,vector<int> &color,int curr) {
       color[node] = curr;
       
       for(auto it : adj[node]) {
           if(color[it] == -1) {
               if(!dfs(it,adj,color,1 - curr)) return false;
           }else if(color[node] == color[it]) return false;
       }
       
       return true;
   }

};