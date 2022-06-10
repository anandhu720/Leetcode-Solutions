class Solution {
public:
    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int r, int c, int color) {
        
        queue<pair<int,int>> q;
        vector<vector<bool>> visited(grid.size(),vector<bool>(grid[0].size(),false));
        
        q.push({r,c});
        visited[r][c] = true;
        
        int val = grid[r][c];
        
        while(!q.empty()) {
            auto x = q.front();
            q.pop();
            
            int grad[] = {0,1,0,-1,0};
            
            bool Border = false;
            
            for(int k=0;k<4;k++) {
                int row = x.first + grad[k];
                int col = x.second + grad[k+1];
                
                
                if(row<0 or col<0 or row>=grid.size() or col>= grid[0].size()) {
                    Border = true;
                    continue;
                }
                
                if(!visited[row][col] and grid[row][col] != val) {
                    Border = true;
                    continue;
                }
                
                if(!visited[row][col]) {
                    q.push({row,col});
                    visited[row][col] = true;
                }                
                
            }
            
            if(Border)
                grid[x.first][x.second] = color;
        }
        
        return grid;

    }
    
};