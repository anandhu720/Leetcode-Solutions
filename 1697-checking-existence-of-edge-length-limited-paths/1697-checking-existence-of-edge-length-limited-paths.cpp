class DisjointSet {
private:
    vector<int> parent,size;
public:
    DisjointSet(int n) {
        size.resize(n+1,1);
        for(int i=0;i<=n;i++) parent.push_back(i);
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
    vector<bool> distanceLimitedPathsExist(int n, vector<vector<int>>& edgeList, vector<vector<int>>& queries) {
        
        for(int i=0;i<queries.size();i++) {
            queries[i].push_back(i);
        }
        
        sort(queries.begin(), queries.end(), [](auto &l, auto &r) { return l[2] < r[2]; });
        sort(edgeList.begin(), edgeList.end(), [](auto &l, auto &r) { return l.back() < r.back(); });
        
        DisjointSet ds(n);
        vector<bool> ans(queries.size(),false);
        int i=0;
        for(auto it : queries) {
            int value = it[2];
            while(i < edgeList.size() and edgeList[i].back() < value) {
                ds.unionBySize(edgeList[i][0],edgeList[i][1]);
                i++;
            }
            
            if(ds.findUPar(it[0]) == ds.findUPar(it[1])) {
                ans[it[3]] = true;
            }
        }
        
        return ans;
    }
};