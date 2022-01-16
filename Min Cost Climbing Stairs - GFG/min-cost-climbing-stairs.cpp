// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:
    int minCostClimbingStairs(vector<int>&cost ,int N) {
        vector<int> dp = cost;
        dp.push_back(0);
        
        for(int i=dp.size()-3;i>=0;i--){
            dp[i] = min(dp[i]+dp[i+2],dp[i]+dp[i+1]);
        }
        
        return min(dp[0],dp[1]);
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>cost(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>cost[i];
        }

        Solution ob;
        cout<<ob.minCostClimbingStairs(cost,N);
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends