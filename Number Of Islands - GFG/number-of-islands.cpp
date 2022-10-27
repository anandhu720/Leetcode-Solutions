//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class DisjointSet {
    vector<int> rank,parent;
public:
    DisjointSet(int n) {
        rank.resize(n,0);
        for(int i=0;i<=n;i++) parent.push_back(i);
    }
    
    int findUPar(int node) {
        if(node == parent[node]) return node;
        
        return parent[node] = findUPar(parent[node]);
    }
    
    void unionByRank(int u,int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        
        if(ulp_u == ulp_v) return;
        
        if(rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v;
        }else if(rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u;
        }else {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
    
};

class Solution {
private:
    vector<int> grad = {0,1,0,-1,0};
  public:
    vector<int> numOfIslands(int n, int m, vector<vector<int>> &op) {
        DisjointSet ds(n*m);
        vector<int> ans;
        vector<vector<int>> grid(n,vector<int>(m,0));
        int cnt = 0;
        for(auto it : op) {
            int i = it[0];
            int j = it[1];
            if(grid[i][j] == 1) {
                ans.push_back(cnt);
                continue;
            }
        
        cnt++;
        grid[i][j] = 1;
        

        for(int k=0;k<4;k++) {
            int nr = i + grad[k];
            int nc = j + grad[k+1];
            
            
            if(nr < 0 or nr >= n or nc < 0 or nc >= m or grid[nr][nc] == 0) continue;
            

            int node = n*j + i;
            int negi = n*nc + nr;
            
            
            int ulp_node = ds.findUPar(node);
            int ulp_negi = ds.findUPar(negi);
            
            if(ulp_node == ulp_negi) {
                continue;
            }
            
            cnt--;
            ds.unionByRank(ulp_node,ulp_negi);
            
            
        }
        
        ans.push_back(cnt);
        
        } 
        
        return ans;
        
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,k; cin>>n>>m>>k;
        vector<vector<int>> a;
        
        for(int i=0; i<k; i++){
            vector<int> temp;
            for(int j=0; j<2; j++){
                int x; cin>>x;
                temp.push_back(x);
            }
            a.push_back(temp);
        }
    
        Solution obj;
        vector<int> res = obj.numOfIslands(n,m,a);
        
        for(auto x : res)cout<<x<<" ";
        cout<<"\n";
    }
}

// } Driver Code Ends