class Solution {
public:
    
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int grad[] = {1,0,-1,0,1};
        int m = mat.size(),n = mat[0].size();
        queue<pair<int,int>> q;
        
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(mat[i][j] == 0) q.push({i,j});
                else mat[i][j] = -1;
            }
        }
        
        while(!q.empty()) {
            auto x = q.front(); q.pop();
            int r = x.first;
            int c = x.second;
            
            for(int k=0;k<4;k++) {
                int row = r + grad[k];
                int col = c + grad[k+1];
                if(row<0 or col<0 or row>=m or col>=n or mat[row][col] != -1) continue;
                
                mat[row][col] = mat[r][c] + 1;
                q.push({row,col});
            }
        }
        
        
        return mat;
    }

};