// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function Template for C++


/**
 *  ith value in adj vector contains information between the node connected to it and weight between them.
 *  Example. for a value 2 3 1, Node 2 and Node 3 has weight 1. adj[2] = {3,1} and adj[3] = {2,1}.
 *  n -> number of nodes
 *  m -> total number of edges
 *  return the mst value
*/

//Function to find the minimum spanning tree value using Kruskal.
struct edge{
    int u;
    int v;
    int wt;
    edge(int x, int y, int z){
        u = x;
        v = y;
        wt = z;
    };
};


bool static comp(struct edge &x, struct edge &y){
    return x.wt < y.wt;
}

int find(int i, vector<int> &parent){
    if(i == parent[i]){
        return i;
    }
    parent[i] = find(parent[i], parent);
    return parent[i];
}

void findunion(int a, int b, vector<int> &parent, vector<int> &rank){
    int a_rep = find(a, parent);
    int b_rep = find(b, parent);
    if(a_rep == b_rep){
        return;
    }
    if(rank[a_rep] > rank[b_rep]){
        parent[b_rep] = a_rep;
    }
    else if(rank[a_rep] < rank[b_rep]){
        parent[a_rep] = b_rep;
    }
    else{
        parent[b_rep] = a_rep;
        rank[a_rep]++;
    }
}

long long int kruskalDSU(vector<pair<int, long long int>> adj[], int n, int m) 
{
       vector<edge> edges;
       for(int i = 1; i <= n; i++){
           for(auto &e : adj[i]){
               int v = e.first;
               int w = e.second;
               if(v > i){
                   edge myEdge(i, v, w);
                   edges.push_back(myEdge);
               }
           }
       }
        sort(edges.begin(), edges.end(), comp);
        vector<int> parent(n + 1, 0);
        vector<int> rank(n + 1, 0);
        for(int i = 0; i <= n; i++){
            parent[i] = i;
        }
        long long ans = 0;
        for(auto &ed : edges){
            int u = ed.u;
            int v = ed.v;
            int wt = ed.wt;
            if(find(u, parent) != find(v, parent)){
                findunion(u, v, parent, rank);
                ans += wt;
            }
        }
        return ans;
}

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;

    vector<pair<int, long long int>> adj[100009];

    while(t--) {

        int n,m;
        cin>>n>>m;

        int u,v;
        long long w;
        for(int i=0; i<m; i++) {
            cin>>u>>v>>w;
            adj[u].push_back(make_pair(v,w));
            adj[v].push_back(make_pair(u,w));
        }

        cout<<kruskalDSU(adj, n, m)<<endl;

        for(int i=0; i<=n; i++) {
            adj[i].clear();
        }
    }
    return 0;
}
  // } Driver Code Ends