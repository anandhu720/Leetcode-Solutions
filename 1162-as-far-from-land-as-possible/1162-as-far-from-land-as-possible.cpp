class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        
        queue<pair<int,int>> q;
        for(int i=0;i<grid.size();i++) {
            for(int j=0;j<grid[0].size();j++) {
                if(grid[i][j] == 1) q.push({i,j});
            }
        }
        
        vector<vector<int>> ans(grid.size(),vector<int>(grid.size(),0));
        vector<int> grad = {0,1,0,-1,0};
        
        while(!q.empty()) {
            auto [r,c] = q.front(); q.pop();
            
            for(int k=0;k<4;k++) {
                int nr = r + grad[k];
                int nc = c + grad[k+1];
                
                if(nr < 0 or nr >= grid.size() or nc < 0 or nc >= grid.size()) continue;
                if(grid[nr][nc] == 1 or ans[nr][nc] > 0) continue;
                
                
                ans[nr][nc] = 1 + ans[r][c];
                
                q.push({nr,nc});
                
                
            }
        }
        
        int maxi = 0;
        for(int i=0;i<grid.size();i++) {
            for(int j=0;j<grid[0].size();j++) {
                maxi = max(maxi,ans[i][j]);
            }
        }
        
        return maxi == 0 ? -1 : maxi;
    }
};