class Solution {
public:
    void solve(vector<vector<char>>& board) {
        
        int m = board.size(),n = board[0].size();
        int grad[] = {0,1,0,-1,0};
        
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(i == 0 or i == m-1 or j == 0 or j == n-1) {

                    if(board[i][j] == 'O') {
                        dfs(i,j,board);
                    }
                    
                }
                
            }
        }
        
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(board[i][j] == 'O') board[i][j] = 'X';
                else if(board[i][j] == '1') board[i][j] = 'O';
            }
        }
         
    }
    
    void dfs(int i,int j,vector<vector<char>> &grid) {
        
        if(i<0 or j<0 or i>=grid.size() or j>=grid[0].size() or grid[i][j] != 'O') return;
        
        grid[i][j] = '1';
        
        dfs(i+1,j,grid);
        dfs(i-1,j,grid);
        dfs(i,j+1,grid);
        dfs(i,j-1,grid);
    }
};