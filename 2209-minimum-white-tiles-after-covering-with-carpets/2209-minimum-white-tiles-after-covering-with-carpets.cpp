class Solution {
public:
    vector<vector<int>> dp;
    int minimumWhiteTiles(string floor, int numCarpets, int carpetLen) {

        dp.resize(floor.size(),vector<int>(numCarpets+1,-1));

        return dfs(0,floor,numCarpets,carpetLen);
    }
    
    int dfs(int index,string &floor,int numCarpets,int carpetLen) {
        
        if(numCarpets < 0) return floor.size();
        if(floor.size() - index <= numCarpets * carpetLen) return 0;
        
        if(dp[index][numCarpets] != -1) return dp[index][numCarpets];
        
        if(floor[index] == '0') return dfs(index+1,floor,numCarpets,carpetLen);
                
        int take = INT_MAX;
        if(floor[index] == '1') {
            take = min(take,dfs(index+carpetLen,floor,numCarpets-1,carpetLen));
        }
        
        take = min(take,1 + dfs(index+1,floor,numCarpets,carpetLen));
        
        return dp[index][numCarpets] = take;
    }
};
