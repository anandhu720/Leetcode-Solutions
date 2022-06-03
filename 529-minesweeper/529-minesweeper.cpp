class Solution {
public:
    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
        
        queue<pair<int,int>> q;
        q.push({click[0],click[1]});
        
        while(!q.empty()) {
            
            int size = q.size();
            
            for(int i=0;i<size;i++) {
                
                auto x = q.front(); q.pop();
                
                if(board[x.first][x.second] == 'M') {
                    board[x.first][x.second] = 'X';
                    return board;
                }
                

                int noOfMines = check(x.first,x.second,board);  // check no of mines near
                if(noOfMines == 0) {
                    board[x.first][x.second] = 'B';
                    dfs(x.first,x.second,board,q); // add all in queue
                }else{
                    board[x.first][x.second] = noOfMines + 48;
                }

                
            }
         
        }
        
        return board;
    }
    
    int check(int r,int c,vector<vector<char>> &board) {
        
        int m = board.size(),n = board[0].size();
        
        int count = 0;
        
        if(r+1 < m and board[r+1][c] == 'M') {
            count++;
        }
        if(r-1 >= 0 and board[r-1][c] == 'M') {
            count++;
        }
        if(c+1 < n and board[r][c+1] == 'M') {
            count++;
        }
        if(c-1 >= 0 and board[r][c-1] == 'M') {
            count++;
        }
        
        
        if(r+1 < m  and c+1 < n and board[r+1][c+1] == 'M') {
            count++;
        }
        if(r+1 < m  and c-1 >= 0 and board[r+1][c-1] == 'M') {
            count++;
        }
        if(r-1 >= 0  and c+1 < n and board[r-1][c+1] == 'M') {
            count++;
        }
        if(r-1 >= 0  and c-1 >= 0 and board[r-1][c-1] == 'M') {
            count++;
        }
        
        
        return count;
        
    }
    
    void dfs(int r,int c,vector<vector<char>> &board,queue<pair<int,int>> &q) {
        int m = board.size(),n = board[0].size();
        
        if(r+1 < m and board[r+1][c] == 'E') {
            q.push({r+1,c});
            board[r+1][c] = 'B';
        }
        if(r-1 >= 0 and board[r-1][c] == 'E') {
            q.push({r-1,c});
            board[r-1][c] = 'B';
        }
        if(c+1 < n and board[r][c+1] == 'E') {
            q.push({r,c+1});
            board[r][c+1] = 'B';
        }
        if(c-1 >= 0 and board[r][c-1] == 'E') {
            q.push({r,c-1});
            board[r][c-1] = 'B';
        }
        
        
        if(r+1 < m  and c+1 < n and board[r+1][c+1] == 'E') {
            q.push({r+1,c+1});
            board[r+1][c+1] = 'B';
        }
        if(r+1 < m  and c-1 >= 0 and board[r+1][c-1] == 'E') {
            q.push({r+1,c-1});
            board[r+1][c-1] = 'B';
        }
        if(r-1 >= 0  and c+1 < n and board[r-1][c+1] == 'E') {
            q.push({r-1,c+1});
            board[r-1][c+1] = 'B';
        }
        if(r-1 >= 0  and c-1 >= 0 and board[r-1][c-1] == 'E') {
            q.push({r-1,c-1});
            board[r-1][c-1] = 'B';
        }
        
    }
};