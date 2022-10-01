class Solution {
public:
    vector<int> findOrder(int v, vector<vector<int>>& pre) {
        unordered_map<int,vector<int>> umap;
        
        for(auto it : pre) {
            umap[it[1]].push_back(it[0]);
        }
        vector<int> indegree(v,0);
        for(int i=0;i<v;i++) {
            for(auto it : umap[i])
                indegree[it]++;
        }
        
        vector<int> topo;
        queue<int> q;
        
        for(int i=0;i<v;i++) {
            if(indegree[i] == 0) q.push(i);
        }
        
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            
            topo.push_back(node);
            
            for(auto it : umap[node]) {
                indegree[it]--;
                if(indegree[it] == 0) q.push(it);
            }
        }
        
        if(topo.size() != v) return {};
        return topo;
    }
};