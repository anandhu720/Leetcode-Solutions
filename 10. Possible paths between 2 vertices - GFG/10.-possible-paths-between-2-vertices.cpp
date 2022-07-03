// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to count paths between two vertices in a directed graph.
   int countPaths(int V, vector<int> adj[], int source, int destination) {
       // Code here
       //When source and destination are same then we simply return 1;
       // And when source and dectination are not equal then we used any traversal and no need 
       // to maintain visited visited vertex since question given that this graph dont have any cycle and 
       //loop and multiple edge 
      if(source==destination){
          return 1;
      }
       queue<int>q;
       int res=0;
       q.push(source);
       while(!q.empty()){
           int a=q.front();
           q.pop();
           for(auto x:adj[a]){
               if(x==destination){
                   res++;
               }
               else{
                   q.push(x);
               }
           }
           
       }
       return res;
       
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
            // adj[v].push_back(u);
        }
        int source, destination;
        cin >> source >> destination;
        Solution obj;
        cout << obj.countPaths(V, adj, source, destination) << endl;
    }
    return 0;
}  // } Driver Code Ends