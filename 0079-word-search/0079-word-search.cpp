class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
       int rows = board.size() , cols=board[0].size();
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(board[i][j] == word[0] && dfs(board,i,j,0,word)) //0 is count of letter found
                    return true;
            }
        }
        return false;
    }
    
    bool dfs(vector<vector<char>>& board,int row,int col,int charCount,string word){
        
        //have 2 base conditions
        //base condition 1
        if(charCount == word.size()) return true;
        
        //boundary conditions 2
        if(row < 0 || row >= board.size() || col < 0 || col >= board[row].size() || 
        word[charCount] != board[row][col])
            return false;
        
        //do
        char temp = board[row][col];
        board[row][col] = ' ';
        
        //recur
        bool found = dfs(board,row+1,col,charCount+1,word) ||
                     dfs(board,row-1,col,charCount+1,word) ||
                     dfs(board,row,col+1,charCount+1,word) ||
                     dfs(board,row,col-1,charCount+1,word);
        
        //undo
        board[row][col] = temp;
        
        return found;
    }
};