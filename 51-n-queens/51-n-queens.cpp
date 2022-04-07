class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<vector<string>> board(n,vector<string>(n,"."));
        unordered_set<int> col,pos_dia,neg_dia;
        dfs(0,board,ans,col,pos_dia,neg_dia);
        return ans;
    }
    
    void dfs(int r,vector<vector<string>> &board,vector<vector<string>> &ans,unordered_set<int> &col,unordered_set<int> &pos_dia,unordered_set<int> &neg_dia) {
        
        //base case
        if(r == board.size()) {
            vector<string> temp;
            for(int i=0;i<board.size();i++) {
                string x = "";
                for(int j=0;j<board[i].size();j++) {
                    x += board[i][j];
                }
                temp.push_back(x);
            }
            ans.push_back(temp);
            return;
        }
        
        for(int c=0;c<board.size();c++) {
            if(col.count(c) > 0 or pos_dia.count(r-c) > 0 or neg_dia.count(r+c)) 
                continue;
            
            col.insert(c);
            pos_dia.insert(r-c);
            neg_dia.insert(r+c);
            board[r][c] = "Q";
            
            dfs(r+1,board,ans,col,pos_dia,neg_dia);
            
            col.erase(c);
            pos_dia.erase(r-c);
            neg_dia.erase(r+c);
            board[r][c] = ".";
            
        }
        
    }
};