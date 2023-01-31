class DisjointSet {
public:
    vector<int> size,parent;
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
        
        if(size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }else{
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};
class Solution {
public:
    vector<bool> friendRequests(int n, vector<vector<int>>& restrictions, vector<vector<int>>& requests) {
        
        DisjointSet ds(n);
        
        vector<bool> ans;
        
        for(auto req : requests) {
            DisjointSet tmp = ds;
            bool flag = true;
            tmp.unionBySize(req[0],req[1]);
            
            for(auto it : restrictions) {
                if(tmp.findUPar(it[0]) == tmp.findUPar(it[1])) {
                    flag = false;
                    ans.push_back(false);
                    break;
                }
            }
            if(flag) {
                ans.push_back(true);
                ds = tmp;
            }
        }
        
        return ans;
        
    }
};