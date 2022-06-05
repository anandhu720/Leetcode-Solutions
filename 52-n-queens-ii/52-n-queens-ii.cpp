class Solution {
public:
    int totalNQueens(int n) {
        vector<vector<char>> board(n,vector<char>(n,'.'));
        unordered_set<int> col,pos,neg;
        return dfs(0,board,col,pos,neg);
    }
    
    int dfs(int r,vector<vector<char>> &board,unordered_set<int> &col,unordered_set<int> &pos,unordered_set<int> &neg) {
        
        if(r == board.size()) {
            return 1;
        }
        
        int ans = 0;
        
        for(int c=0;c<board.size();c++) {
            
            if(col.count(c) > 0 or pos.count(r-c) > 0 or neg.count(r+c) > 0)
                continue;
            
            board[r][c] = 'Q';
            col.insert(c);
            pos.insert(r-c);
            neg.insert(r+c);
            
            ans += dfs(r+1,board,col,pos,neg);
            
            board[r][c] = '.';
            col.erase(c);
            pos.erase(r-c);
            neg.erase(r+c);
            
        }
        
        return ans;
    }
};