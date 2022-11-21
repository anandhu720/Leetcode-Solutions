class Solution {
public:
    vector<int> grad = {0,1,0,-1,0};
    int bfs(int i,int j,vector<vector<char>> &grid) {
        grid[i][j] = '+';
        
        queue<pair<int,int>> q;
        q.push({i,j});
        int length = 0;
        while(!q.empty()) {
            int size = q.size();
            length++;
            
            for(int i=0;i<size;i++) {
                auto [r,c] = q.front(); q.pop();
                
                for(int k=0;k<4;k++) {
                    int nr = r + grad[k];
                    int nc = c + grad[k+1];
                    
                    if(nr < 0 or nr >= grid.size() or nc < 0 or nc >= grid[0].size() or grid[nr][nc] == '+')
                        continue;
                    
                    if(nr == 0 or nr == grid.size()-1 or nc == 0 or nc == grid[0].size()-1)
                        return length;
                    
                    grid[nr][nc] = '+';
                    q.push({nr,nc});
                }
            }
        }
        return -1;
    }
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        return bfs(entrance[0],entrance[1],maze);
    }
};