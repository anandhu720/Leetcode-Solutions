// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int CountPS(char S[], int N);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        char S[N+1];
        cin>>S;
        cout<<CountPS(S,N)<<endl;
    }
    return 0;
}

// } Driver Code Ends


int CountPS(char s[], int N)
{
    vector<vector<bool>> dp(N,vector<bool>(N,false));
    
    int count = 0;
    for(int g=0;g<N;g++){
        int i,j;
        for(i=0,j=g;j<N;i++,j++){
            if(g == 0){
                count--;
                dp[i][j] = true;
            }else if (g == 1){
                if(s[i] == s[j])
                    dp[i][j] = true;
                else dp[i][j] = false;
            }else{
                if(s[i] == s[j] && dp[i+1][j-1] == true)
                    dp[i][j] = true;
                else dp[i][j] = false;
            }
            
            if(dp[i][j]) count++;
        }
    }
    return count;
    
}