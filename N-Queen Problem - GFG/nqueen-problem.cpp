// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

    void dfs(int r,vector<vector<int>> &board,vector<vector<int>> &ans,unordered_set<int> &col,unordered_set<int> &pos,unordered_set<int> &neg) {
        
        if(r == board.size()) {
            vector<int> temp;
            for(int i=0;i<board.size();i++) {
                for(int j=0;j<board.size();j++) {
                    if(board[i][j] == 1)
                        temp.push_back(j+1);
                }
            }
            
            ans.push_back(temp);
            return;
        }
        
        for(int c=0;c<board.size();c++) {
            
            if(col.count(c) > 0 or pos.count(r-c) > 0 or neg.count(r+c) > 0) continue;
            
            board[r][c] = 1;
            col.insert(c);
            pos.insert(r-c);
            neg.insert(r+c);
            
            dfs(r+1,board,ans,col,pos,neg);
            
            board[r][c] = 0;
            col.erase(c);
            pos.erase(r-c);
            neg.erase(r+c);
            
        }
        
    }
    
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>> board(n,vector<int>(n,0));
        vector<vector<int>> ans;
        unordered_set<int> col,pos,neg;
        dfs(0,board,ans,col,pos,neg);
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends