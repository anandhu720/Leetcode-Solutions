class DisjointSet {
    vector<int> size,parent;
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
    
    void unionBySize(int u,int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        
        if(ulp_u == ulp_v) return;
        
        if(size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }else{
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }  
    
    int getUnions() {
        int cnt = 0;
        for(int i=0;i<parent.size();i++) {
            parent[i] = findUPar(i);
            if(parent[i] == i and size[i] > 1) cnt++;
        }
        
        return cnt;
    }
};
class Solution {
public:
    int removeStones(vector<vector<int>>& stones) {
        int mr = 0,mc = 0;
        for(auto it : stones) {
            mr = max(mr,it[0]);
            mc = max(mc,it[1]);
        }
        DisjointSet ds(mr+mc+1);
        
        
        for(auto it : stones) {
            int i = it[0];
            int j = it[1];
            ds.unionBySize(i,mr+j+1);
        }
        
        return stones.size() - ds.getUnions();
        
    }
};