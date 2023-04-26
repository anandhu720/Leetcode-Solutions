class Solution {
private:
    unordered_map<int,vector<int>> umap;
    bool bipfn(int node,int c,vector<int> &color,vector<int> &vis) {
        vis[node] = 1;
        color[node] = c;
        
        for(auto it : umap[node]) {
            if(vis[it] == 0) {
                if(!bipfn(it,!c,color,vis)) return false;
            }else if(color[it] == c) {
                return false;
            }
        }
        return true;
    }
    bool bip(int n) {
        vector<int> vis(n+1,0);
        vector<int> color(n+1,-1);
        
        for(int i=1;i<=n;i++) {
            if(vis[i] == 0) {
                if(!bipfn(i,0,color,vis)) return false; 
            }
        }
        
        return true;
    }
    
    int bfs(int n,int node) {
        
        int cnt = 0;
        queue<int> q;
        vector<int> vis(n+1,0);
        q.push(node);
        vis[node] = 1;
        
        while(!q.empty()) {
            int size = q.size();
            cnt++;
            
            for(int i=0;i<size;i++) {
                node = q.front(); q.pop();
                
                for(auto it : umap[node]) {
                    if(vis[it] == 0) {
                        vis[it] = 1;
                        q.push(it);
                    }
                }
            }
        }
        
        return cnt;
    }
    
    int dfs(int node,vector<int> &vis,vector<int> &dist) {
        vis[node] = 1;
        
        int ans = dist[node];
        for(auto it : umap[node]) {
            if(vis[it] == 0) {
                ans = max(ans,dfs(it,vis,dist));
            }
        }
        
        return ans;
    }
public:
    int magnificentSets(int n, vector<vector<int>>& edges) {
        for(auto it : edges) {
            umap[it[0]].push_back(it[1]);
            umap[it[1]].push_back(it[0]);
        }
        
        bool checkBip = bip(n);
        if(!checkBip) return -1;
        
        vector<int> dist(n+1,-1);
        
        for(int i=1;i<=n;i++) {
            int val = bfs(n,i);
            dist[i] = val;
        }
        
        vector<int> vis(n+1,0);
        int ans = 0;
        for(int i=1;i<=n;i++) {
            if(vis[i] == 0) {
                ans += dfs(i,vis,dist);
            }
        }
        
        return ans;
        
        
    }
};