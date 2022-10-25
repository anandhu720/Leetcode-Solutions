class Solution {
public:
    //Dijkstra Algorithm
    unordered_map<int,vector<pair<int,int>>> umap;
    void dijkstra(int src,vector<int> &dist) {
        
        dist[src] = 0;
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        
        pq.push({0,src}); //dist,node
        
        while(!pq.empty()) {
            int node = pq.top().second;
            int d = pq.top().first;
            pq.pop();
            
            for(auto it : umap[node]) {
                int child = it.first;
                int childd = it.second;
                
                if(d + childd < dist[child]) {
                    dist[child] = d + childd;
                    pq.push({dist[child],child});
                }
            }
        }
    }
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        for(auto it : edges) {
            umap[it[0]].push_back({it[1],it[2]});
            umap[it[1]].push_back({it[0],it[2]});
        }
        
        int cnt = 0;
        int currMin = INT_MAX;
        
        for(int i=0;i<n;i++) {
            vector<int> dist(n,INT_MAX);
            dijkstra(i,dist);
            int c = 0;
            for(auto it : dist) {
                if(it <= distanceThreshold) c++;
            }
            
            if(c <= currMin) {
                cnt = i;
                currMin = c;
            }
        }
        
        return cnt;
    }
};