class Solution {
public:
    vector<int> grad = {0,1,0,-1,0};
    int swimInWater(vector<vector<int>>& grid) {
        vector<vector<int>> dist(grid.size(),vector<int>(grid.size(),1e9));
        
        dist[0][0] = grid[0][0];
        
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> pq;
        
        pq.push({dist[0][0],0,0});
        
        while(!pq.empty()) {
            
            int d = pq.top()[0];
            int r = pq.top()[1];
            int c = pq.top()[2];
            
            pq.pop();
            
            for(int k=0;k<4;k++) {
                int nr = r + grad[k];
                int nc = c + grad[k+1];
                
                if(nr < 0 or nr >= grid.size() or nc < 0 or nc >= grid.size())
                    continue;
                
                int canReach = max(grid[nr][nc],d);
                if(canReach < dist[nr][nc]) {
                    dist[nr][nc] = canReach;
                    pq.push({dist[nr][nc],nr,nc});
                }
            }
            
        }
        
        return dist[grid.size()-1][grid.size()-1];
                     
    }
};