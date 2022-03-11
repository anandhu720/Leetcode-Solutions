// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int isValid(vector<vector<int>> mat){
        // code here
        map<int,set<int>> row,col;
        map<pair<int,int>,set<int>> sq;
        
        for(int r=0;r<mat.size();r++){
            for(int c=0;c<mat[r].size();c++){
                
                if(mat[r][c] == 0) continue;
                
                if(row[r].find(mat[r][c]) != row[r].end() or
                    col[c].find(mat[r][c]) != col[c].end() or
                    sq[{r/3,c/3}].find(mat[r][c]) != sq[{r/3,c/3}].end()) return false;
                    
                row[r].insert(mat[r][c]);
                col[c].insert(mat[r][c]);
                sq[{r/3,c/3}].insert(mat[r][c]);
                
            }
        }
        
        return true;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<int>> mat(9, vector<int>(9, 0));
        for(int i = 0;i < 81;i++)
            cin>>mat[i/9][i%9];
        
        Solution ob;
        cout<<ob.isValid(mat)<<"\n";
    }
    return 0;
}  // } Driver Code Ends