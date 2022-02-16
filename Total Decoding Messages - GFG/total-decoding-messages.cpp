// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int CountWays(string s){
		    // Code here
		   int mod = 1000000007;
		  int n=s.size();
         int dp[n+1];
         dp[n]=1;
         dp[n-1]=s[n-1]=='0'?0:1;
         for(int i=n-2;i>=0;--i){
             dp[i]=0;
             if(s[i]!='0'){
                 dp[i]+=dp[i+1]%mod;
                 if(stoi(s.substr(i,2))<=26)dp[i]+=dp[i+2]%mod;
             }
         }
         return dp[0]%mod;
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends