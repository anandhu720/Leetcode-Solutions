// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maximumPath(int N, vector<vector<int>> matrix)
    {
        // code here
        for(int i=matrix.size()-2;i>=0;i--){
            for(int j=0;j<matrix[i].size();j++){
                if(j == 0){
                    matrix[i][j] += max(matrix[i+1][j],matrix[i+1][j+1]);
                }else if(j == matrix[i].size()-1){
                    matrix[i][j] += max(matrix[i+1][j],matrix[i+1][j-1]);
                }else{
                    matrix[i][j] += max(matrix[i+1][j],max(matrix[i+1][j+1],matrix[i+1][j-1]));
                }
            }
        }
        
        int mini = INT_MIN;
        for(int i=0;i<matrix[0].size();i++)
            mini = max(mini,matrix[0][i]);
        return mini;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}  // } Driver Code Ends