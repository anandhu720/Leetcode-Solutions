// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
public:
//Function to return list containing vertices in Topological order. 
void topsort(vector<int> adj[],vector<bool>& vis, stack<int>& st, int s)
{
    vis[s]=true;
    for(int x: adj[s])
    {
        if(vis[x]==false)
        topsort(adj,vis,st,x);
    }
    st.push(s);
}

vector<int> topoSort(int v, vector<int> adj[]) 
{
    // code here
   // vector<int> ans;
   // vector<int> ind(v,0);
   // vector<int> vis(v,0);
   // for(int i=0;i<v;i++)
   // {
   //     for(int x:adj[i])
   //     ind[x]++;
   // }
   // queue<int> q;
   // for(int i=0;i<v;i++)
   // {
   //     if(ind[i]==0)
   //     q.push(i);
   // }
   // while(q.empty()==false)
   // {
   //     int w=q.front();
   //     vis[w]=1;
   //     ans.push_back(w);
   //     for(int u:adj[w])
   //     {
   //         if(vis[u]==0)
   //         {
   //             ind[u]--;
   //             if(ind[u]==0)
   //             q.push(u);
   //         }
   //     }
   //     q.pop();
   // }
   // return ans;
   
   vector<int> ans;
   stack<int> st;
   vector<bool> vis(v,false);
   for(int i=0;i<v;i++)
   {
       if(vis[i]==false)
       topsort(adj,vis,st,i);
   }
   while(st.size())
   {
       ans.push_back(st.top());
       st.pop();
   }
   return ans;
}
};
// { Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}  // } Driver Code Ends