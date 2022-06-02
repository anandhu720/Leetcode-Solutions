class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        
        unordered_map<int,vector<int>> adj;
        vector<int> counter(n,0);
        
        for(auto it : edges) {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
            counter[it[0]]++;
            counter[it[1]]++;
        }
        
        
        queue<int> q;
        
        for(int i=0;i<n;i++){
            if(counter[i] <= 1) {
                q.push(i);
            }
        }
        
        while(n > 2) {
            int curr_leaf = q.size();
            
            n -= curr_leaf;
            
            for(int i=0;i<curr_leaf;i++) {
                
                int node = q.front(); q.pop();
                
                for(auto k : adj[node]) {
                    counter[k]--;
                    if(counter[k] == 1) q.push(k);
                }
                
            }
        }
        
        vector<int> res;
        while(!q.empty()) {
            res.emplace_back(q.front()); 
            q.pop();
        }
        
        return res;
    }
};