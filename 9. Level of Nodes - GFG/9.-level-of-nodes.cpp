// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
	public:
	int nodeLevel(int v, vector<int> adj[], int x)  {
	    if(x>=v) return -1;
	    vector<int> vis(v);
	    queue<int> q;
	    q.push(0);
	    while(!q.empty()) {
	        int node=q.front(); q.pop();
	        for(int it:adj[node]) {
	            if(vis[it]==0) {
	                q.push(it);
	                vis[it]=vis[node]+1;
	                if(it==x) return vis[it];
	            }
	        }
	    }
	    
	}
};
// { Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E, X;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
    	cin>>X;

    	Solution obj;
    	cout << obj.nodeLevel(V, adj, X) << "\n";
    }

    return 0;
}

  // } Driver Code Ends