class Solution {
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        int zero = 0,sx = 0,sy = 0;
        for(int i=0;i<grid.size();i++) {
            for(int j=0;j<grid[i].size();j++) {
                if(grid[i][j] == 0) zero++;
                if(grid[i][j] == 1) {
                    sx = i;
                    sy = j;
                }
            }
        }
        
        return dfs(sx,sy,grid,zero);
    }
    
    vector<int> grad = {0,1,0,-1,0};
    int dfs(int i,int j,vector<vector<int>> &nums,int zero) {
        
        if(i < 0 or i >= nums.size() or  j < 0 or j >= nums[0].size() or nums[i][j] == -1)
            return 0;
        
        if(nums[i][j] == 2) return zero == -1 ? 1 : 0;
        
        nums[i][j] = -1;
        zero--;
        int x = 0;
        
        for(int k=0;k<4;k++) {
            x += dfs(i+grad[k],j+grad[k+1],nums,zero);
        }
        
        nums[i][j] = 0;
        zero++;
        
        return x;
        
    }
    
};

