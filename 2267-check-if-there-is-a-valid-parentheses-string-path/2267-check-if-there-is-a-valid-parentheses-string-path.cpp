class Solution {
public:
    int x[100][100][205];
    bool hasValidPath(vector<vector<char>>& grid) {
        memset(x, -1, sizeof(x));
        return dfs(0,0,grid,0);
    }
    
    bool dfs(int row,int col,vector<vector<char>> &grid,int count) {
        
        if(col >=grid[0].size() or row >= grid.size()) return false;

        
        if(grid[row][col] == '(') count++;
        else count--;
        
        if(count < 0 ) return false;
        
        if(row ==grid.size()-1 and col == grid[0].size()-1) {
            return count == 0;
        }
        
        if(x[row][col][count] != -1) return x[row][col][count];
        
        
        
        bool right = dfs(row,col+1,grid,count);
        bool down  = dfs(row+1,col,grid,count);
        
        
        return x[row][col][count] = (right or down);
    }
};