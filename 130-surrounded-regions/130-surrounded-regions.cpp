class Solution {
public:
    void solve(vector<vector<char>>& board) {
        
        int m = board.size(),n = board[0].size();
        int grad[] = {0,1,0,-1,0};
        
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(i == 0 or i == m-1 or j == 0 or j == n-1) {

                    if(board[i][j] == 'O') {
                        queue<pair<int,int>> q;
                        q.push({i,j});
                        board[i][j] = '1';
                        
                        
                        while(!q.empty()) {
                            auto x = q.front();
                            q.pop();
                            
                            for(int k=0;k<4;k++) {
                                int r = x.first + grad[k];
                                int c = x.second + grad[k+1];
                                
                                if(r<0 or c<0 or r>=m or c>=n) continue;
                                
                                if(board[r][c] == 'O'){
                                    board[r][c] = '1';
                                    q.push({r,c});
                                }
                                
                            }
                        }
                
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
};