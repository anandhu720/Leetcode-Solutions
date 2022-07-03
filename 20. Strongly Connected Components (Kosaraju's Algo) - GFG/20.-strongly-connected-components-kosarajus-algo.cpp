// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
	void dfs(vector<int> adj[],int src,vector<int>& top,vector<int> &vis)
{
    vis[src]=1;
    for(auto t:adj[src])
       if(vis[t]==0)
        dfs(adj,t,top,vis);
      top.push_back(src);
}

void transp(vector<int> adj[],vector<int> nadj[],int n)
{
    for(int i=0;i<n;i++)
       for(auto t:adj[i])
          nadj[t].push_back(i);
} 

void dfs1(vector<int> adj[],int src,vector<int> &vis)
{
    vis[src]=1;
    for(auto t:adj[src])
      if(vis[t]==0)
       dfs1(adj,t,vis);
}

int kosaraju(int n, vector<int> adj[])
{
        vector<int> top;
        vector<int> vis(n,0);
        for(int i=0;i<n;i++)
         if(vis[i]==0)
            dfs(adj,i,top,vis);
        vector<int> nadj[n];
        transp(adj,nadj,n);
        int ans=0;
      
        vector<int> v2(n,0);
        for(int i=top.size()-1;i>=0;i--)
           if(v2[top[i]]==0)
             {
              ans++;
              dfs1(nadj,top[i],v2);
             }

         return ans;
}
};

// { Driver Code Starts.


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