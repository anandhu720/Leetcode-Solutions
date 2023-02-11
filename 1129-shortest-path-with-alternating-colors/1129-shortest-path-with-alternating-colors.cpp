class Solution {
public:
    void bfs(unordered_map<int,vector<pair<int,int>>> &umap,vector<int> &dist,vector<int> &vis) {
        
        dist[0] = 0;
        
        queue<pair<int,int>> q;

        q.push({0,-1});  // node,color
        vis[0]++;

        int depth = 0;
        
        while(!q.empty()) {
            depth++;
            int size = q.size();
            
            bool flag = true;
            for(auto it : dist) if(it == 1e9) flag = false;
            
            if(flag) break;
            
            for(int i=0;i<size;i++) {
                int node = q.front().first;
                int color = q.front().second;
            
                q.pop();
            
                for(auto it : umap[node]) {
                    int child = it.first;
                    int c_color = it.second;
                
                    if(color == c_color) continue;
                
                    
                    dist[child] = min(depth,dist[child]);
                    
                    if(vis[child] > 100) continue;
                    
                    vis[child]++;
                    q.push({child,c_color});
                }
            }
        }
        
    }
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& red, vector<vector<int>>& blue) {
        unordered_map<int,vector<pair<int,int>>> umap;
        
        for(auto it : red) {
            umap[it[0]].push_back({it[1],0});
        }
        
        for(auto it : blue) {
            umap[it[0]].push_back({it[1],1});
        }
        
        vector<int> dist(n,1e9);
        vector<int> vis(n,0);
        
        bfs(umap,dist,vis);
        
        for(int i=0;i<n;i++) {
            if(dist[i] == 1e9) dist[i] = -1; 
        }
        
        return dist;
    }
};