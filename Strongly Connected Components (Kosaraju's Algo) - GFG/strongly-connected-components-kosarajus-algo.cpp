//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    private:
    void dfs(int node,vector<int> adj[],vector<int> &vis,stack<int> &st) {
        vis[node] = 1;
        
        for(auto it : adj[node]) {
            if(vis[it] == 0)
                dfs(it,adj,vis,st);
        }
        
        st.push(node);
    }
    void dfs1(int node,vector<int> &vis,unordered_map<int,vector<int>> &umap) {
        vis[node] = 1;
        
        for(auto it : umap[node]) {
            if(vis[it] == 0) {
                dfs1(it,vis,umap);
            }
        }
    }
	public:
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<int> adj[])
    {
        stack<int> st;
        vector<int> vis(V,0);
        
        for(int i=0;i<V;i++) {
            if(vis[i] == 0) {
                dfs(i,adj,vis,st);
            }
        }
        
        unordered_map<int,vector<int>> umap;
        for(int i=0;i<V;i++) {
            vis[i] = 0;
            for(auto it : adj[i]) {
                umap[it].push_back(i);
            }
        }
        
        int cnt = 0;
        while(!st.empty()) {
            int node = st.top(); st.pop();
            
            if(vis[node] == 0) {
                cnt++;
                dfs1(node,vis,umap);
            }
        }
        
        return cnt;
    }
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends