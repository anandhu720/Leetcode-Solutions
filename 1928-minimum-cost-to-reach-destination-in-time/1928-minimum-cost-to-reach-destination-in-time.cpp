class Solution {
public:
    unordered_map<int,vector<pair<int,int>>> umap;
    int minCost(int maxTime, vector<vector<int>>& edges, vector<int>& passingFees) {
        
        for(auto it : edges) {
            umap[it[0]].push_back({it[1],it[2]});
            umap[it[1]].push_back({it[0],it[2]});
        }
        
        vector<int> dist(passingFees.size(),INT_MAX);  
        
        dist[0] = 0;
        
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<>> pq;
        
        pq.push({passingFees[0],{dist[0],0}}); // fees,dist,node
            
        while(!pq.empty()) {
            
            int cost = pq.top().first;
            int d = pq.top().second.first;
            int node = pq.top().second.second;
            
            pq.pop();
            
            for(auto it : umap[node]) {
                int child = it.first;
                int cd = it.second; // d to reach child
                
                if(d + cd > maxTime) continue;
                
                if(child == passingFees.size()-1) {
                    return cost + passingFees[passingFees.size()-1];
                }
                
                if(d + cd < dist[child]) {
                    dist[child] = d+ cd;
                    pq.push({cost+passingFees[child],{dist[child],child}});
                }
                
            }
            
        }
        return -1;
    }
};