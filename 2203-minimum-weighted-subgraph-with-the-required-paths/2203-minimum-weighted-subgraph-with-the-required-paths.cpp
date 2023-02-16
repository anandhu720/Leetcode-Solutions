class Solution {
private:
    void dijkstra(int node,unordered_map<int,vector<pair<int,int>>> &umap,vector<long long> &dist) {
        
        dist[node] = 0;
        priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<>> pq;
        
        pq.push({0,node});
        
        while(!pq.empty()) {
            long long D = pq.top().first;
            int node = pq.top().second; pq.pop();
            
            if(dist[node] != D) continue; //reduced iteration
            
            for(auto [child,d] : umap[node]) {
                if((long long)(dist[node] + d) < dist[child]) {
                    dist[child] = (long long)(dist[node] + d);
                    pq.push({dist[child],child});
                }
            }
        }
    }
public:
    long long minimumWeight(int n, vector<vector<int>>& edges, int src1, int src2, int dest) {
        unordered_map<int,vector<pair<int,int>>> umap,rumap;
        for(auto it : edges) {
            umap[it[0]].push_back({it[1],it[2]});
            rumap[it[1]].push_back({it[0],it[2]});
        }
        
        vector<long long> dist1(n,1e18),dist2(n,1e18),dd(n,1e18);
        dijkstra(src1,umap,dist1);
        dijkstra(src2,umap,dist2);
        dijkstra(dest,rumap,dd);
        
        if(dd[src1] == 1e18 or dd[src2] == 1e18) return -1;
        
        long long res = 1e18;
        for(int i=0;i<n;i++) {
            res = min(res,dd[i] + dist1[i] + dist2[i]);
        }
        
        return res;
        
    }
};
