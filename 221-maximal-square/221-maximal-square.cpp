class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        
        vector<vector<int>> dp(matrix.size(),vector<int>(matrix[0].size(),0));
        
        for(int i=0;i<dp.size();i++) dp[i][0] = matrix[i][0]-48;
        for(int j=0;j<dp[0].size();j++) dp[0][j] = matrix[0][j]-48;
        
        for(int i=1;i<dp.size();i++){
           for(int j=1;j<dp[i].size();j++){
               if(matrix[i][j] == '0'){
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
                cout<<dp[i][j]<<" ";
                if(dp[i][j] >= maxi)
                    maxi = dp[i][j];
            }
            cout<<endl;
        }
        
        return maxi;
        
    }
};