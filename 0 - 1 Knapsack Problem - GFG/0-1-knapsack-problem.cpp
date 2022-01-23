// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       vector<vector<int>> dp(n+1,vector<int>(W+1,0));
       
       for(int i=1;i<n+1;i++){
           int currentWeight = wt[i-1];
           int currentValue = val[i-1];
           for(int c=0;c<W+1;c++){
               if(currentWeight > c) dp[i][c] = dp[i-1][c];
               else{
                   dp[i][c] = max(dp[i-1][c],dp[i-1][c - currentWeight] + currentValue);
               }
           }
       }
       
       return dp[n][W];
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends