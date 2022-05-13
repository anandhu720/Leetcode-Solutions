class Solution {
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int m = grid2.size(), n = grid2[0].size();
        
        int sub = 0;
        
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(grid2[i][j] == 1) {
                    
                    bool isSub = true;
                    dfs(i,j,grid1,grid2,isSub);
                    
                    if(isSub) sub++;
                    
                }
            }
        }
        
        return sub;
    }
    
    void dfs(int i,int j,vector<vector<int>> &grid1,vector<vector<int>> &grid2,bool &isSub) {
        
        if(i<0 or i>= grid1.size() or j<0 or j>=grid1[0].size() or grid2[i][j] == 0) return;
        
        if(grid1[i][j] != 1) isSub = false;
        grid2[i][j] = 0;
        
        
        dfs(i+1,j,grid1,grid2,isSub);
        dfs(i-1,j,grid1,grid2,isSub);
        dfs(i,j+1,grid1,grid2,isSub);
        dfs(i,j-1,grid1,grid2,isSub);
        
    }
};