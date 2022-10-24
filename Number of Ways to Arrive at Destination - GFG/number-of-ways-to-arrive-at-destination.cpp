//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int mod = 1e9 + 7;
    int countPaths(int n, vector<vector<int>>& roads) {
        unordered_map<int,vector<pair<int,int>>> adj;
        
        for(auto it : roads) {
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        
        vector<int> dist(n,INT_MAX);
        vector<int> ways(n,0);
        
        dist[0] = 0;
        ways[0] = 1;
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        // queue<pair<int,int>> pq;
        
        pq.push({0,0}); //dist,node
        
        while(!pq.empty()) {
            int d = pq.top().first;
            int node = pq.top().second;
            
            pq.pop();
            
            for(auto it : adj[node]) {
                int childnode = it.first;
                int childd = it.second;
                
                if((d%mod+childd%mod)%mod < dist[childnode]) {
                    dist[childnode] = (d%mod+childd%mod)%mod;
                    ways[childnode] = ways[node];
                    pq.push({dist[childnode],childnode});
                }else if((d%mod+childd%mod)%mod == dist[childnode]){
                    ways[childnode] += ways[node]%mod;
                    ways[childnode] %= mod; 
                }
            }
        }
        return ways[n-1];        
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int u, v;

        vector<vector<int>> adj;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        Solution obj;
        cout << obj.countPaths(n, adj) << "\n";
    }

    return 0;
}
// } Driver Code Ends