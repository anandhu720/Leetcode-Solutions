// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxSquare(int n, int m, vector<vector<int>> matrix){
        vector<vector<int>> dp(matrix.size(),vector<int>(matrix[0].size(),0));
        
        for(int i=0;i<dp.size();i++) dp[i][0] = matrix[i][0];
        for(int j=0;j<dp[0].size();j++) dp[0][j] = matrix[0][j];
        
        for(int i=1;i<dp.size();i++){
           for(int j=1;j<dp[i].size();j++){
               if(matrix[i][j] == 0){
                   dp[i][j] = 0;
               }else{
                  if(dp[i-1][j] == dp[i-1][j-1] &&  dp[i][j-1] == dp[i-1][j-1] && dp[i][j-1] == dp[i-1][j] && dp[i-1][j] != 0){
                      int num = dp[i-1][j];
                      num = sqrt(num);
                      num = num+1;
                      dp[i][j] = num*num;
                  }else{
                      int temp = min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]));
                      if(temp == 0) dp[i][j] = 1;
                      else{
                        temp = sqrt(temp);
                        temp = temp+1;
                        dp[i][j] = temp*temp;
                      } 
                  }
               }
               
           }
        }
        
        int maxi = INT_MIN;
        for(int i=0;i<dp.size();i++){
            for(int j=0;j<dp[0].size();j++){
                if(dp[i][j] >= maxi)
                    maxi = dp[i][j];
            }
        }
        
        return sqrt(maxi);
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for(int i = 0;i < n*m;i++)
            cin>>mat[i/m][i%m];
        
        Solution ob;
        cout<<ob.maxSquare(n, m, mat)<<"\n";
    }
    return 0;
}  // } Driver Code Ends