//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        unordered_map<int,vector<int>> umap;
        for(auto it : edges) {
            umap[it[0]].push_back(it[1]);
            umap[it[1]].push_back(it[0]);
        }
        
        queue<pair<int,int>> q;
        
        vector<int> dist(N,1e9);
        dist[src] = 0;
        
        q.push({src,0});
        
        while(!q.empty()) {
            auto it = q.front(); q.pop();
            int node = it.first;
            int prev = it.second;
            
            for(int child : umap[node]) {
                if(prev + 1 < dist[child]) {
                    dist[child] = prev + 1;
                    q.push({child,dist[child]});
                }
            }
        }
        
        for(int i=0;i<dist.size();i++) 
            if(dist[i] == 1e9) dist[i] = -1;
        
        return dist;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for(int j=0; j<2; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src; cin >> src;

        Solution obj;

        vector<int> res = obj.shortestPath(edges, n, m, src);

        for (auto x : res){
            cout<<x<<" ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends