class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        vector<vector<char>> temp;
        map<int,set<char>> row,col;
        map<pair<int,int>,set<char>> sq;
        
        saver(board,row,col,sq);
        
        dfs(board,row,col,sq,temp);
        
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                board[i][j] = temp[i][j];
            }
        }
        
    }
    
    void saver(vector<vector<char>> &mat,map<int,set<char>> &row,map<int,set<char>>            &col,map<pair<int,int>,set<char>> &sq) {
        
        for(int r=0;r<mat.size();r++){
            for(int c=0;c<mat[r].size();c++){
                if(mat[r][c] == '.') continue;
                
                row[r].insert(mat[r][c]);
                col[c].insert(mat[r][c]);
                sq[{r/3,c/3}].insert(mat[r][c]);
            }
        }
    }
    
        void dfs(vector<vector<char>> &mat,map<int,set<char>> &row,map<int,set<char>>            &col,map<pair<int,int>,set<char>> &sq,vector<vector<char>> &temp) {
            
            for(int r=0;r<mat.size();r++) {
                for(int c=0;c<mat.size();c++) {
                    
                    if(r == 8 and c == 8){
                        temp = mat;
                    }
                    
                    if(mat[r][c] != '.') continue;
                    
                    
                    for(char it='1';it<='9';it++){
                        if(
                            row[r].find(it) == row[r].end() and
                            col[c].find(it) == col[c].end() and
                            sq[{r/3,c/3}].find(it) == sq[{r/3,c/3}].end()
                        ){
                                                     
                            // cout<<it<<" "<<r<<" "<<c<<endl;
                            
                            row[r].insert(it);
                            col[c].insert(it);
                            sq[{r/3,c/3}].insert(it);
                            
                            mat[r][c] = it;
                            
                            dfs(mat,row,col,sq,temp);
                            
                            
                            mat[r][c] = '.';
                            
                            row[r].erase(it);
                            col[c].erase(it);
                            sq[{r/3,c/3}].erase(it);
                            
                        }
                    }
                    if(mat[r][c] == '.') return;
                }
            }
            
            return;
            
        }
    
};