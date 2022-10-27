//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class DisjointSet {
    vector<int> size,parent;
public:
    DisjointSet (int n) {
        size.resize(n+1,1);
        for(int i=0;i<=n;i++) parent.push_back(i);
    }
    
    int findUPar(int node) {
        if(node == parent[node]) return node;
        
        return parent[node] = findUPar(parent[node]);
    }
    
    void UnionBySize(int u,int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        
        if(ulp_u == ulp_v) return;
        
        if(size[ulp_u] > size[ulp_v]) {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }else{
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
    }
    
    int getSize(int node) {
        return size[node];
    }
};
class Solution {
  public:
    vector<int> grad = {0,1,0,-1,0};
    int MaxConnection(vector<vector<int>>& grid) {
        int n = grid.size();
        DisjointSet ds(grid.size()*grid.size());
        
        int res = 1;
        
        for(int i=0;i<grid.size();i++) {
            for(int j=0;j<grid.size();j++) {
                if(grid[i][j] == 0) continue;
                
                for(int k=0;k<4;k++) {
                    int nr = i + grad[k];
                    int nc = j + grad[k+1];
                    
                    if(nr < 0 or nr >= n or nc < 0 or nc >= n or grid[nr][nc] == 0)
                        continue;
                    
                    int node = grid.size()*j + i;
                    int negi = grid.size()*nc + nr;
                    
                    ds.UnionBySize(node,negi);
                }
            }
        }
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(grid[i][j] == 1) continue;
                
                int cnt = 1;
                unordered_set<int> uset;
                for(int k=0;k<4;k++) {
                    int nr = i + grad[k];
                    int nc = j + grad[k+1];
                    
                    if(nr < 0 or nr >= n or nc < 0 or nc >= n or grid[nr][nc] == 0)
                        continue;
                    int child = n*nc + nr;
                    child = ds.findUPar(child);
                    if(uset.count(child) > 0) continue;
                    uset.insert(child);
                    cnt += ds.getSize(child);
                }
                
                res = max(res,cnt);
            }
        }
        
        return res;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> grid(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> grid[i][j];
            }
        }

        Solution obj;
        cout<<obj.MaxConnection(grid)<<"\n";
    }
}

// } Driver Code Ends