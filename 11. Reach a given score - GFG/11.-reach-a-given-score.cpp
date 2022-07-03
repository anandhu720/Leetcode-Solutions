// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll count(ll n);

int main()
{
    //taking total testcases
	int t;
	cin>>t;
	
	while(t--)
	{
	    //taking the score
		ll n;
		cin>>n;
		
		//calling function count()
		cout << count(n) << "\n";
	}
	return 0;
}// } Driver Code Ends


//User function tempate for C++


ll count(ll n) 
{
    int score[4] = {0, 3, 5 , 10};
    ll dp[4][n + 1];
    for(int i = 0; i<= 3; i++){
        dp[i][0] = 1;
    }
    for(int i = 1; i <= n; i++){
        dp[0][i] = 0;
    }
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= n; j++){
            dp[i][j] = dp[i - 1][j];
            if(score[i] <= j){
                dp[i][j] += dp[i][j - score[i]];
            }
        }
    }
    return dp[3][n];
}