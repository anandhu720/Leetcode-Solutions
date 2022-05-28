class Solution {
public:
    int rot(int i, int j,vector<vector<int>>& g, int d) {
        if (i < 0 || j < 0 || i >= g.size() || j >= g[i].size() || g[i][j] != 1) return 0;
        g[i][j] = d + 3;
        return 1;
    }
    
    int orangesRotting(vector<vector<int>>& grid,int d = 0,int fresh = 0) {
        int m = grid.size(), n = grid[0].size();
        
        for(int i=0;i<m;i++) 
            for(int j=0;j<n;j++)
                if(grid[i][j] == 1) fresh++;
        
        for(int old_fresh = fresh;fresh > 0;d++) {
            
            for(int i=0;i<m;i++) {
                for(int j=0;j<n;j++) {
                    
                    if(grid[i][j] == d+2) {
                        fresh -= rot(i-1,j,grid,d) + rot(i+1,j,grid,d) + rot(i,j-1,grid,d)                                         +rot(i,j+1,grid,d); 
                    }
                    
                }
            }
            if(fresh == old_fresh) return -1;
            old_fresh = fresh;
            
        }
        
        return d;
    }
};