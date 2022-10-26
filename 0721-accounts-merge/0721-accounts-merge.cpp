class DisjointSet {
    vector<int> rank,parent;
public:
    DisjointSet(int n) {
        rank.resize(n+1,0);
        for(int i=0;i<=n;i++) {
            parent.push_back(i);
        }
    }
    
    
    int findUPar(int node) {
        
        if(node == parent[node]) return node;
        
        return parent[node] = findUPar(parent[node]);
    }
    
    void unionByRank(int u,int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        
        if(parent[ulp_u] < parent[ulp_v]) {
            parent[ulp_u] = ulp_v;
        }else if(parent[ulp_v] < parent[ulp_u]) {
            parent[ulp_v] = ulp_u;
        }else {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
};
class Solution {
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        DisjointSet ds(accounts.size());
        unordered_map<string,int> umap;
        int n = accounts.size();
        for(int i=0;i<n;i++) {
            for(int j=1;j<accounts[i].size();j++) {
                string s = accounts[i][j];
                if(umap.find(s) != umap.end()) {
                    ds.unionByRank(i,umap[s]);
                }else{
                    umap[s] = i;
                }
            }
        }
        
        unordered_map<int,vector<string>> tmp;
        for(auto it : umap) {
            int ulp = ds.findUPar(it.second);
            tmp[ulp].push_back(it.first);
        }
        
        vector<vector<string>> ans;
        
        for(auto it : tmp) {
            sort(it.second.begin(),it.second.end());
            vector<string> x;
            x.push_back(accounts[it.first][0]);
            for(auto i : it.second) x.push_back(i);
            
            ans.push_back(x);
        }
        
        return ans;
    }
};