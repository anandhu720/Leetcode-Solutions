class DisjointSet {
    vector<int> size,parent;
public:
    DisjointSet(int n) {
        size.resize(n,1);
        for(int i=0;i<n;i++) {
            parent.push_back(i);
        }
    }
    
    int findUPar(int node) {
        if(node == parent[node]) return node;
        
        return parent[node] = findUPar(parent[node]);
    }
    
    void unionBySize(int u,int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        
        if(ulp_u == ulp_v) return ;
        
        if(size[ulp_u] > size[ulp_v]) {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }else{
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];            
        }
    }
    
    int find() {
        int cnt = 0;
        for(int i=0;i<parent.size();i++) {
            parent[i] = findUPar(i);
            if(parent[i] == i and size[i] == 2) {
                cnt++;
            }
        }
        return cnt;
    }
};
class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        DisjointSet ds(grid.size()+grid[0].size());
        
        int cnt = 0;
        for(int i=0;i<grid.size();i++) {
            for(int j=0;j<grid[0].size();j++) {
                if(grid[i][j] == 0) continue;
                cnt++;
                ds.unionBySize(i,grid.size()+j);
            }
        }
        
        
        int comp = ds.find();
        return cnt - comp;
        
    }
};
