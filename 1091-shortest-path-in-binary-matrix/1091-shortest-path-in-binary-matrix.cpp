class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int row = grid.size();
        if (row == 0) return -1;
        int col = grid[0].size();
        if (col == 0 ) return -1;
        if (grid[0][0] != 0 | grid[row-1][col-1] != 0) return -1;
        
        queue<pair<int,int>> q;
        q.push({0,0});
        
        vector<vector<int>> dir = {{1,1},{0,1},{1,0},{0,-1},{-1,0},{-1,-1},{1,-1},{-1, 1}};
        grid[0][0] = 1;
        
        while(!q.empty()) {
            auto curr = q.front(); q.pop();
            int x = curr.first; int y  = curr.second;
            
            if(x == row-1 and y == col-1) return grid[x][y];
            
            for(auto it : dir) {
                int nx = x + it[0];
                int ny = y + it[1];
                
                if(nx >=0 and ny>=0 and nx<row and ny<col and grid[nx][ny] == 0) {
                    q.push({nx,ny});
                    grid[nx][ny] = grid[x][y] + 1;
                }
            }
        }
        
        return -1;
    }
};