class DisjointSet {
    vector<int> size,parent;
public:
    DisjointSet(int n) {
        size.resize(n+1,1);
        for(int i=0;i<=n;i++) parent.push_back(i);
    }
    
    int findUPar(int node) {
        if(node == parent[node]) return node;
        
        return parent[node] = findUPar(parent[node]);
    }
    
    void unionBySize(int u,int v) {
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
};
class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        
        DisjointSet ds(edges.size());
        
        vector<int> ans;
        
        for(auto it : edges) {
            
            if(ds.findUPar(it[0]) == ds.findUPar(it[1]))
                ans = it;
            else
                ds.unionBySize(it[0],it[1]);
        }
        
        return ans;
    }
};