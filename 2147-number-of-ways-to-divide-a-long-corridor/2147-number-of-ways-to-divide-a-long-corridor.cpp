class Solution {
public:
    const int mod = (int)1e9 + 7;
    long long dp[100001][3];
    
    int numberOfWays(string corridor) {
        memset(dp,-1,sizeof(dp));
       return dfs(corridor,0,0); 
    }
    
    int dfs(string &c,int i,int k) {
        
        if(i >= c.size()) return k == 2;
        
        if(dp[i][k] != -1) return dp[i][k];
        
        if(k == 2) {  //if seats is 3 then we have two choice
            if(c[i] == 'P') { //we can add that plant or cut 
                return dp[i][k] = (dfs(c,i+1,0)%mod + dfs(c,i+1,k)%mod) %mod;
            }else{ //we need to strictly cut
               return dp[i][k] = dfs(c,i+1,1)%mod; 
            }
            
        }
           
        return dp[i][k] = dfs(c,i+1,k + (c[i] == 'S')) % mod;
    }
};