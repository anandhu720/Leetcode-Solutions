class Solution {
public:
    int minimumTime(vector<vector<int>>& grid) {
        
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<>> pq;
        vector<vector<int>> vis(grid.size(),vector<int>(grid[0].size(),0));
        pq.push({0,{0,0}}); // dist,r,c
        vis[0][0] = 1;
        
        if(grid[0][1] > 1 and grid[1][0] > 1) return -1;
        
        int grad[] = {0,1,0,-1,0};
        
        while(!pq.empty()) {
            int d = pq.top().first;
            int r = pq.top().second.first;
            int c = pq.top().second.second;
            
            if(r == grid.size() - 1 and c == grid[0].size()-1) 
                return d;
            
            pq.pop();
            
            for(int k=0;k<4;k++) {
                int nr = r + grad[k];
                int nc = c + grad[k+1];
                
                if(nr < 0 or nr >= grid.size() or nc < 0 or nc >= grid[0].size() or vis[nr][nc] == 1)
                    continue;
                
                vis[nr][nc] = 1;
                
                if(d+1 >= grid[nr][nc]) {
                    pq.push({d+1,{nr,nc}});
                }else{
                    if((grid[nr][nc]%2 == 0 and d%2 != 0) or (grid[nr][nc]%2 != 0 and d%2 == 0))
                        pq.push({grid[nr][nc],{nr,nc}});
                    else
                        pq.push({grid[nr][nc]+1,{nr,nc}});
                    
                }
            }
        }
        
        return -1;
    }
};