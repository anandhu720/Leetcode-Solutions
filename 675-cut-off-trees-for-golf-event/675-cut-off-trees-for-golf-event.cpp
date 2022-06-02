class Solution {
public:
    int cutOffTree(vector<vector<int>>& forest) {
        vector<vector<int>> num;
        
        int m = forest.size(),n = forest[0].size();
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(forest[i][j] > 1)
                    num.push_back({forest[i][j],i,j});
            }
        }
        
        sort(num.begin(),num.end());
        
        int res = 0;
        
        for(int i=0,curr_r=0,curr_c=0;i<num.size();i++) {
            int steps = bfs(forest,curr_r,curr_c,num[i][1],num[i][2]);
            
            if(steps == -1) return -1;
            
            res += steps;
            forest[curr_r][curr_c] = 1;
            
            curr_r = num[i][1];
            curr_c = num[i][2];
        }
        
        return res;
    }
    
    int bfs(vector<vector<int>> &grid,int cr,int cc,int er,int ec) {
        
        if(cr == er and cc == ec) return 0;
        
        int m = grid.size(),n = grid[0].size();
        
        queue<pair<int,int>> q;
        q.push({cr,cc});
        
        int step = 0;
        
        vector<vector<bool>> vis(m,vector<bool> (n,false));
        
        vis[cr][cc] = true;
        
        while(!q.empty()) {
            
            step++;
            
            int size = q.size();
            
            for(int i=0;i<size;i++) {
                auto x = q.front(); q.pop();
            
                int grad[] = {0,1,0,-1,0};
            
                for(int k=0;k<4;k++) {
                    int row = x.first + grad[k];
                    int col = x.second + grad[k+1];

                    if(row<0 or col<0 or row>=m or col>=n or grid[row][col] == 0 or vis[row]                            [col] == true) continue;
                    
                    if(row == er and col == ec) return step;
                    
                    vis[row][col] = true;
                    
                    q.push({row,col});
                    
                }
            }

        }
        
        return -1;
        
    }
};