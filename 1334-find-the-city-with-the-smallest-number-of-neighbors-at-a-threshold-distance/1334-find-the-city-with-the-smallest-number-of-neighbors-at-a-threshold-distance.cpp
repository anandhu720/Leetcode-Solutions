class Solution {
private:
    unordered_map<int,vector<pair<int,int>>> umap;
    
    void dijkstra(int node,vector<int> &dist) {
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,node}); //dist,node
        dist[node] = 0;
        
        while(!pq.empty()) {
            pair<int,int> x = pq.top(); pq.pop();
            int d = x.first;
            int node = x.second;
            
            for(auto it : umap[node]) {
                int child = it.first;
                int val = it.second;
                if(d+val < dist[child]) {
                    dist[child] = d+val;
                    pq.push({d+val,child});
                }
            }
        }
    }
    
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        
        for(auto it : edges) {
            umap[it[0]].push_back({it[1],it[2]});
            umap[it[1]].push_back({it[0],it[2]});
        }
        
        int ans = 0,c = INT_MAX;
        
        for(int i=0;i<n;i++) {
            vector<int> dist(n,INT_MAX);
            dijkstra(i,dist);
            
            int cnt = 0;
            for(auto it : dist) {
                if(it <= distanceThreshold) cnt++;
            }
            
            if(cnt <= c) {
                ans = i;
                c = cnt;
            }
        }
        
        return ans;
    }
};