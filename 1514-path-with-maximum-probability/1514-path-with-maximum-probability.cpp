class Solution {
private:
    unordered_map<int,vector<pair<int,double>>> umap;
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        int i=0;
        for(auto it : edges) {
            umap[it[0]].push_back({it[1],succProb[i]});
            umap[it[1]].push_back({it[0],succProb[i]});
            i++;
        }
        
        vector<double> dist(n,0);
                
        priority_queue<pair<double,int>> pq;
        
        pq.push({0.0,start}); //dist,node
        dist[start] = 1;
        
        while(!pq.empty()) {
            int node = pq.top().second; pq.pop();
            
            for(auto it : umap[node]) {
                int child = it.first;
                double d = it.second;
                
                if(dist[node] * d > dist[child]) {
                    dist[child] = dist[node] * d;
                    pq.push({dist[child],child});
                }
            }
        }
        
        for(auto it : dist) cout<<it<<" ";
        
        return dist[end];
    }
};