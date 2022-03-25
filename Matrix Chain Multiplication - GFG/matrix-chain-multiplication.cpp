// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int matrixMultiplication(int N, int arr[])
    {
        // code her
        vector<vector<int>> dp(N-1,vector<int>(N-1,0));
        
        for(int g=0;g<dp.size();g++) {
            for(int i=0,j=g;j<dp.size();i++,j++) {
                if(g == 0) {
                    dp[i][j] = 0;
                }else if(g == 1) {
                    dp[i][j] = arr[i] * arr[j] * arr[j+1];
                }else {
                    int minValue = INT_MAX;
                    for(int k=i;k<j;k++) {
                        int lc = dp[i][k];
                        int rc = dp[k+1][j];
                        int mc = arr[i] * arr[k+1] * arr[j+1];
                        int total = lc+rc+mc;
                        minValue = min(minValue,total);
                    }
                    dp[i][j] = minValue;
                }
            }
        }
        
        return dp[0][dp.size()-1];
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}  // } Driver Code Ends