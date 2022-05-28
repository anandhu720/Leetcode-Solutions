class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size(),n = grid[0].size();
        int grad[] = {0,1,0,-1,0};
        
        queue<pair<int,int>> q;
        int totalOrange = 0;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++) {
                if(grid[i][j] != 0) totalOrange++;
                if(grid[i][j] == 2) q.push({i,j});
            }
        }
        
        int days = 0;
        int cnt = 0;
        while(!q.empty()) {
            int size = q.size();
            cnt += size;
            
            while(size--) {
                auto x = q.front(); q.pop();
                
                for(int k=0;k<4;k++) {
                    int r = x.first + grad[k];
                    int c = x.second + grad[k+1];
                    
                    if(r < 0 || c < 0 || r >= m || c >= n || grid[r][c] != 1) continue;
                    grid[r][c] = 2;
                    q.push({r,c});
                    
                }
            }
            
            if(!q.empty()) days++;
        }
        
        return totalOrange == cnt ? days : -1;
    }
};