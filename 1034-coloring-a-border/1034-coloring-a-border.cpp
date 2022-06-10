class Solution {
public:
    void dfs(int r,int c,vector<vector<int>> &g,int cl) {
        if(r<0 or r>=g.size() or c<0 or c>=g[0].size() or g[r][c] != cl) return;
        
        g[r][c] = -1 * cl;
        
        int grad[] = {0,1,0,-1,0};
        
        for(int k=0;k<4;k++) dfs(r+grad[k],c+grad[k+1],g,cl);
        
        if(r > 0 && r < g.size() - 1 && c > 0 && c < g[r].size() - 1 && cl == abs(g[r - 1][c]) &&
    cl == abs(g[r + 1][c]) && cl == abs(g[r][c - 1]) && cl == abs(g[r][c + 1]))
            g[r][c] = cl;
    }
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        dfs(row,col,grid,grid[row][col]);
        for (auto i = 0; i < grid.size(); ++i)
            for (auto j = 0; j < grid[i].size(); ++j) 
                grid[i][j] = grid[i][j] < 0 ? color : grid[i][j];
        return grid;
    }
};