class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,unordered_set<char>> col;
        unordered_map<int,unordered_set<char>> row;
        map<pair<int,int>,unordered_set<char>> squares; //key = [r/3,c/3]
        
        for(int r=0;r<board.size();r++){
            for(int c=0;c<board[r].size();c++){
                
                if(board[r][c] == '.')
                    continue;
                
                if(row[r].find(board[r][c]) != row[r].end()) return false;
                if(col[c].find(board[r][c]) != col[c].end()) return false;
                if(squares[{r/3,c/3}].find(board[r][c]) != squares[{r/3,c/3}].end())
                    return false;
                
                row[r].insert(board[r][c]);
                col[c].insert(board[r][c]);
                squares[{r/3,c/3}].insert(board[r][c]);   
            }
        }
        
        return true;
    }
};