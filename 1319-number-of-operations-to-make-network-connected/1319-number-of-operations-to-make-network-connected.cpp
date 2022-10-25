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
    
    int noOfComponents() {
        unordered_set<int> uset;
        for(int i=0;i<parent.size()-1;i++) {
            findUPar(i);
            uset.insert(parent[i]);
        }
        
        return uset.size();
    }
};

class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        DisjointSet ds(n);
        int cnt = 0;
        for(auto it : connections) {
            if(ds.findUPar(it[0]) == ds.findUPar(it[1])) {
                cnt++;
                continue;
            }
            
            ds.unionByRange(it[0],it[1]);
        }
        
        int comp = ds.noOfComponents()-1; 
        
        return comp <= cnt ? comp : -1;
    }
};