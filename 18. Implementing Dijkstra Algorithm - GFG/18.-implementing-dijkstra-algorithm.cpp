// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<int> dist(V,INT_MAX);
        vector<bool> final(V,false);
        dist[S] = 0;
        for(int i = 0; i < V-1; i++){
            int u = -1;
            for(int v = 0; v < V; v++){ // finding the vertex which will be finalized
                if(final[v] == false && (u == -1 || dist[v] <= dist[u]))
                    u = v;
            }
            final[u] = true;
            // update the distance of every vertex from source
            for(auto it: adj[u]){
                int v = it[0];
                int w = it[1];
                if(final[v] == false){
                    dist[v] = min(dist[v], (dist[u] + w));
                }
            }
        }
        return dist;
    }
};


// { Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}

  // } Driver Code Ends