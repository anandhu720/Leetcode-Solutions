// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
// Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        queue<pair<int,int>> q;
        vector<bool> vis(V,0);
        for(int i = 0; i < V; i++){
            if(vis[i]) continue;
            
            q.push({i,-1});
            vis[i] = true;
            while(!q.empty()){
                int u = q.front().first;
                int par = q.front().second;
                q.pop();
                for(auto v: adj[u]){
                    if(vis[v] == true and v != par) 
                    	return 1;
                    if(vis[v]) 
                    	continue;
                    q.push({v,u});
                    vis[v] = true;
                }
            }
        }
        
        return 0;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends