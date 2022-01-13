class Solution {
public:
    int minDistance(string word1, string word2) {
        //dp matrix
        vector<vector<int>> dp(word2.length()+1,vector<int>(word1.length()+1,0));
        
        for(int i=0;i<word2.length()+1;i++){
            for(int j=0;j<word1.length()+1;j++){
                dp[i][j] = j;
            }
            dp[i][0] = i;
        }
        
        for(int i=1;i<word2.length()+1;i++){
            for(int j=1;j<word1.length()+1;j++){
                if(word2[i-1] == word1[j-1])
                    dp[i][j] = dp[i-1][j-1];
                else
                    dp[i][j] = 1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
            }
        }
        return dp[word2.length()][word1.length()];
    }
};