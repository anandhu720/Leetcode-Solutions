class Solution {
private:
    vector<int> grad = {0,1,0,-1,0};
    void unmark(int r,int c,vector<vector<int>> &grid) {
        int n = grid.size(),m=grid[0].size();
        
        if(r < 0 or r >= n or c < 0 or c >= m or grid[r][c] == 1) return;
        
        grid[r][c] = 1;
        
        for(int k=0;k<4;k++) {
            int nr = r + grad[k];
            int nc = c + grad[k+1];
            unmark(nr,nc,grid);
        }
    }
public:
    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size(),m = grid[0].size();
        
        // unmarking all islands connected to border
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if((i == 0 or i == n-1 or j == 0 or j == m-1) and grid[i][j] == 0) {
                    unmark(i,j,grid);
                }
            }
        }
        
        
        int cnt = 0;
        
        //counting islands
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(grid[i][j] == 0) {
                    cnt++;
                    unmark(i,j,grid);
                }
            }
        }
        
        return cnt;
    }
};
