class Solution {
public:
    int n;
    int dp[51][51][501];
    int dfs(int m,int c,int moves,vector<vector<int>> &graph) {
        
        int x = moves;
        
        if(moves > 5*n) return 0; //draw
        
        if(m == c) return 2; //cat wins
        if(m == 0) return 1; // mouse wins
        
        if(dp[m][c][x] != -1) return dp[m][c][x];
        
        
        if(moves%2 == 0) { // mouse move
            bool draw = false;
            
            for(auto it : graph[m]) {
                int ans = dfs(it,c,moves+1,graph);
                if(ans == 1) return dp[m][c][x] = 1;
                
                if(ans == 0) draw = true;
            }
            
            if(draw) return dp[m][c][x] = 0;
            return dp[m][c][x] = 2;
        }else { // cat move
            bool draw = false;
            
            for(auto it : graph[c]) {
                if(it == 0) continue;
                
                int ans = dfs(m,it,moves+1,graph);
                if(ans == 2) return dp[m][c][x] = 2;
                
                if(ans == 0) draw = true;
            }
            
            if(draw) return dp[m][c][x] = 0;
            return dp[m][c][x] = 1;
        }
    }
    int catMouseGame(vector<vector<int>>& graph) {
        n = graph.size();
        memset(dp,-1,sizeof(dp));
        return dfs(1,2,0,graph);
    }
};