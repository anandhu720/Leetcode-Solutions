// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
        int maxSum(int n)
        {
            //code here.
            if(n == 0 || n == 1) return 0;
            vector<int> dp(n+1,-1);
            dp[0] = 0;
            dp[1] = 1;
            for(int i=2;i<dp.size();i++)
                dp[i] = max(i,dp[i/2]+dp[i/3]+dp[i/4]);
            return dp[n];
        }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}  // } Driver Code Ends