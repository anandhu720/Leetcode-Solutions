class DisjointSet
{

    vector<int> rank, parent, size;

public:
    DisjointSet(int n)
    {
        rank.resize(n + 1, 0);
        size.resize(n + 1, 0);
        for (int i = 0; i <= n; i++)
            parent.push_back(i);
    }

    // find ultimate parent
    int findUPar(int node)
    {
        if (node == parent[node])
            return node;
        return parent[node] = findUPar(parent[node]); // doing path comp
    }

    void unionByRange(int u, int v)
    {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);

        if (ulp_u == ulp_v)
            return; // they belong to same component

        if (rank[ulp_u] < rank[ulp_v])
        {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_v] < rank[ulp_u])
        {
            parent[ulp_v] = ulp_u;
        }
        else
        {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }

    void unionBySize(int u, int v)
    {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);

        if (ulp_u == ulp_v)
            return; // they belong to same component

        if (size[ulp_u] < size[ulp_v])
        {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else
        {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};

class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& nums) {
        DisjointSet ds(n);
        vector<vector<int>> adj(n);
        
        for(auto it : nums) {
            adj[it[0] - 1].push_back(it[1] - 1);
            adj[it[1] - 1].push_back(it[0] - 1);
        }
        
        for(auto it : adj) {
            if(it.size() == 0) continue;
            int curr = it[0];
            for(auto i : it) {
                ds.unionByRange(curr,i);
            }
        }
        
        for(auto it : nums) {
            if(ds.findUPar(it[0]-1) == ds.findUPar(it[1] - 1))
                return false;
        }
        
        return true;
        
        
        
    }
};