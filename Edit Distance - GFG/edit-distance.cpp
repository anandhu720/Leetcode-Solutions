// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int editDistance(string str1, string str2) {
        vector<vector<int>> dp(str2.length()+1,vector<int>(str1.length()+1,0));
        
        for(int i=0;i<str2.length()+1;i++){
            for(int j=0;j<str1.length()+1;j++){
                dp[i][j] = j;
            }
            dp[i][0] = i;
        }
        
        for(int i=1;i<str2.length()+1;i++){
            for(int j=1;j<str1.length()+1;j++){
                if(str2[i-1] == str1[j-1]) dp[i][j] = dp[i-1][j-1];
                else dp[i][j] = 1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
            }
        }
        
        return dp[str2.length()][str1.length()];
    }
};

// { Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends