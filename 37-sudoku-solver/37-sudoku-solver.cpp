class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
    bool solve(vector<vector<char>> &mat) {
        
        for(int r=0;r<mat.size();r++) {
            for(int c=0;c<mat[r].size();c++) {
                
                if(mat[r][c] == '.') {
                    
                    for(char i = '1';i<='9';i++) {
                        if(isValid(r,c,i,mat)) {
                            mat[r][c] = i;
                            
                            if(solve(mat) == true) return true;
                            
                            mat[r][c] = '.';
                        }
                    }
                    
                    return false;
                    
                }
                
            }
        }
        
        return true;
    }
    
    bool isValid(int r,int c,char i,vector<vector<char>> &mat) {
        for(int x=0;x<9;x++) {
            
            if(mat[r][x] == i) return false;
            if(mat[x][c] == i) return false;
            if(mat[3 * (r/3) + x/3][3 * (c/3) + x%3] == i) return false;
        }
        
        return true;
    }
};