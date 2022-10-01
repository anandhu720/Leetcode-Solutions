class Solution {
public:
    bool canFinish(int v, vector<vector<int>>& pre) {
        unordered_map<int,vector<int>> adj;
        for(auto it : pre) {
            adj[it[1]].push_back(it[0]);
        }
        
        vector<int> indegree(v,0);
        
        for(int i=0;i<v;i++) {
            for(auto it : adj[i]) {
                indegree[it]++;
            }
        }
        
        int cnt = 0;
        queue<int> q;
        
        for(int i=0;i<v;i++){
            if(indegree[i] == 0) q.push(i);
        }
        
        while(!q.empty()) {
            int node = q.front(); q.pop();
            cnt++;
            
            for(auto it : adj[node]) {
                indegree[it]--;
                if(indegree[it] == 0) q.push(it);
            }
        }
        
        return cnt == v;
    }
};