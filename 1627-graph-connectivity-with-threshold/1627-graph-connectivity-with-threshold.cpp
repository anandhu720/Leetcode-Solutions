class DisjointSet {
private:
    vector<int> parent,size;
public:
    DisjointSet(int n) {
        size.resize(n+1,1);
        for(int i=0;i<=n;i++) {
            parent.push_back(i);
        }
    }
    
    int findUPar(int node) {
        if(node == parent[node]) return node;
        
        return parent[node] = findUPar(parent[node]);
    }
    
    void unionBySize(int ul,int vl) {
        int u = findUPar(ul);
        int v = findUPar(vl);
        
        if(u == v) return;
        
        if(size[u] > size[v]) {
            size[u] += size[v];
            parent[v] = u;
        }else{
            size[v] += size[u];
            parent[u] = v;
        }
    }
};
class Solution {
public:
    vector<bool> areConnected(int n, int threshold, vector<vector<int>>& queries) {
        DisjointSet ds(n);
        
        for(int i=threshold+1;i<=n;i++) {
            for(int j=2;j*i<=n;j++) {
                if(ds.findUPar(i) == ds.findUPar(j*i)) continue;

                ds.unionBySize(i,j*i);
            }
        }
        
        vector<bool> ans;
        for(auto it : queries) {
            int x = it[0];
            int y = it[1];
            
            if(ds.findUPar(x) == ds.findUPar(y)) {
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        
        return ans;
    }
};