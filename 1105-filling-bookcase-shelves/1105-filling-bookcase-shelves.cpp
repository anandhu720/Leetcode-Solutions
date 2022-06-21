class Solution {
public:
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        vector<vector<int>> dp(books.size(),vector<int> (shelfWidth+1,-1));
        return dfs(0,shelfWidth,0,books,shelfWidth,dp);
    }
    
    int dfs(int index,int remWidth,
            int currH,vector<vector<int>> &books,int shelfWidth,vector<vector<int>> &dp) {
        
        if(index == books.size()) return currH;
        
        if(dp[index][remWidth] != -1) return dp[index][remWidth];
        
        int sameRow = INT_MAX,nextRow = INT_MAX;
        
        nextRow = currH + 
            dfs(index+1,shelfWidth - books[index][0],books[index][1],books,shelfWidth,dp);
        
        if(books[index][0] <= remWidth) {
            currH = max(currH,books[index][1]);
            sameRow = dfs(index+1,remWidth - books[index][0],currH,books,shelfWidth,dp);
        }
        
        
        
        return dp[index][remWidth] = min(nextRow,sameRow);
        
    }
};