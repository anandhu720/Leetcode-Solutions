class Solution {
public:
    int paint(int i,int j,vector<vector<int>> &grid) {
        
        if(min(i,j) < 0 or max(i,j) >= grid.size() or grid[i][j] != 1) return 0;
        
        grid[i][j] = 2;
        
        return 1 +paint(i-1,j,grid)+paint(i+1,j,grid)+paint(i,j-1,grid)+paint(i,j+1,grid);
        
    }
    bool expand(int i,int j,vector<vector<int>> &grid,int cl) {
        if(min(i,j) < 0 or max(i,j) == grid.size()) return false;
        
        grid[i][j] = grid[i][j] == 0 ? cl+1 : grid[i][j];
        
        return grid[i][j] == 1;
    }
    int shortestBridge(vector<vector<int>>& grid) {
        int n = grid.size();
        
        for (int i = 0, found = 0; !found && i < n; ++i)
            for (int j = 0; !found && j < n; ++j)
                found = paint(i, j,grid);
        
        
        for(int cl=2;;cl++)
            for(int i=0;i<n;i++)
                for(int j=0;j<n;j++)
                    if(grid[i][j] == cl and (expand(i+1,j,grid,cl) or expand(i-1,j,grid,cl) or            expand(i,j+1,grid,cl) or expand(i,j-1,grid,cl)))
                        return cl-2;
        
        
        return -1;
    }
};