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
    
    int noOfComponent() {
        unordered_set<int> uset;
        for(int i=1;i<parent.size();i++) {
            findUPar(i);
            uset.insert(parent[i]);
        }
        
        return uset.size();
    }
};

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        DisjointSet ds(isConnected.size());
        
        for(int i=0;i<isConnected.size();i++) {
            for(int j=0;j<isConnected.size();j++) {
                if(i == j) continue;
                if(isConnected[i][j] == 1)
                    ds.unionByRange(i+1,j+1);
            }
        }
        
        return ds.noOfComponent();
    }
};