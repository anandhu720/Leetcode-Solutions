class Solution {
private:
    void dfs(int row,int col,vector<vector<int>> &grid) {
        
        if(row < 0 or row >= grid.size() or col < 0 or col >= grid[0].size() or grid[row][col] == 0) return;
        
        grid[row][col] = 0;
        
        dfs(row+1,col,grid);
        dfs(row-1,col,grid);
        dfs(row,col+1,grid);
        dfs(row,col-1,grid);
    }
    
    int check(vector<vector<int>> &grid) {
        int n = grid.size(),m = grid[0].size();
        
        int no = 0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(grid[i][j] == 1) {
                    no++;
                    dfs(i,j,grid);
                }
            }
        }  
        
        return no;
    }
public:
    int minDays(vector<vector<int>>& grid) {
        int n = grid.size(),m = grid[0].size();
        int no = 0;
        vector<vector<int>> tmp = grid;
        
        no = check(tmp);
                
        if(no > 1 or no == 0) return 0;
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(grid[i][j] == 1) {
                    tmp = grid;
                    tmp[i][j] = 0;
                    int no = check(tmp);
                    if(no > 1 or no == 0) return 1;       
                }
            }
        }
        
        return 2;
        
    }
};