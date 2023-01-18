class NumMatrix {
private:
    vector<vector<int>> grid;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        grid = matrix;
        for(int i=1;i<grid.size();i++) {
            grid[i][0] += grid[i-1][0];
        }
        for(int i=1;i<grid[0].size();i++) {
            grid[0][i] += grid[0][i-1];
        }
        
        for(int i=1;i<grid.size();i++) {
            for(int j=1;j<grid[0].size();j++) {
                grid[i][j] = grid[i][j] + grid[i-1][j] + grid[i][j-1] - grid[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        //base conditions
        if(row1 == 0 and col1 == 0) return grid[row2][col2];
        if(row1 == 0) {
            return grid[row2][col2] - grid[row2][col1-1];
        }
        if(col1 == 0) {
            return grid[row2][col2] - grid[row1-1][col2];
        }
        
        return grid[row2][col2] - grid[row2][col1-1] - grid[row1-1][col2] + grid[row1-1][col1-1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */