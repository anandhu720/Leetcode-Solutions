class Solution {
public:
    int secondMinimum(int n, vector<vector<int>>& edges, int time, int change) {
        unordered_map<int,vector<int>> umap;
        for(auto it : edges) {
            umap[it[0]].push_back(it[1]);
            umap[it[1]].push_back(it[0]);
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> q;
        q.push({0,1}); //dist,node
        
        vector<int> count(n+1,0);
        vector<int> d(n+1,0);
        
        while(!q.empty()) {
            int node = q.top().second;
            int dist = q.top().first;
            q.pop();
            
            if(count[node] == 2) continue;
            
            if(dist != d[node]) {
                count[node]++;
                d[node] = dist;
            }

            if(count[node] == 2 and node == n) return dist;

            for(auto it : umap[node]) {
                int val = dist/change;
                
                if(val%2 != 0) {
                    int x = change - (dist%change);
                    q.push({x+dist+time,it});
                }else{
                    q.push({dist+time,it});
                }
            }
            
        }
        
        return -1;
    }
};