class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size(),n = grid[0].size();
        int grad[] = {0,1,0,-1,0};
        int count = 0;
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(grid[i][j] == '1') {
                    count++;
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    grid[i][j] = '0';
                    while(!q.empty()) {
                        
                        pair<int,int> p = q.front();
                        
                        q.pop();
                        
                        for(int k=0;k<4;k++){
                            
                            int r = p.first+grad[k],c = p.second+grad[k+1];
                            if(r >= 0 and r < m and c >= 0 and c < n and grid[r][c] == '1') {
                                q.push({r,c});
                                grid[r][c] = '0';
                            }
                            
                        }
                        
                    }
                }
            }
        }
        
        return count;
    }
    
};