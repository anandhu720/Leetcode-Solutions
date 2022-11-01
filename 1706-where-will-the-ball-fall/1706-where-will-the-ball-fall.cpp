class Solution {
public:
    int dfs(int row,int col,vector<vector<int>> &grid) {
        
        while(row < grid.size()) {
                    
            if(grid[row][col] == 1) {
                if(col+1 >= grid[0].size() or grid[row][col+1] != 1) return -1;
                row += 1;
                col += 1;
            }else{
                if(col-1 < 0 or grid[row][col-1] != -1) return -1;
                row += 1;
                col -= 1;
            }
        }
        
        return col;
    }
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int> ans(grid[0].size(),-1);
        
        for(int i=0;i<grid[0].size();i++) {
            int x = dfs(0,i,grid);
            if(x != -1) ans[i] = x;
        }
        
        return ans;
    }
};

