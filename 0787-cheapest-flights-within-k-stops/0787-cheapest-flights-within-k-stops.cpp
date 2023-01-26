class Solution {
public:
    // Dijkstra's Algorithm
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int d, int k) {
        unordered_map<int,vector<pair<int,int>>> adj;
        
        for(auto it : flights) {
            adj[it[0]].push_back({it[1],it[2]});
        }
        
        vector<int> stops(n+1,INT_MAX);
        
        // dist,node,stops
        priority_queue <vector<int>,vector<vector<int>>,greater<vector<int>>> pq;
        
        pq.push({0,src,0});
        
        while(!pq.empty()) {
            auto it = pq.top(); pq.pop();
            
            int dst = it[0];
            int node = it[1];
            int stop = it[2];
            
            if(stop > stops[node] or stop > k+1) continue;
            stops[node] = stop;
            
            if(node == d) return dst; 
            
            for(auto child : adj[node]) {
                int nextDist = child.second;
                int nextNode = child.first;
                
                pq.push({dst+nextDist,nextNode,stop+1});
            }
        }
        
        return -1;
        
    }

};
