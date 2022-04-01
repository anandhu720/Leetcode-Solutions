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
    
    int dfs(int i,int j,vector<vector<int>> &nums,int zero) {
        if(i>=nums.size() or i < 0 or j >= nums[0].size() or j < 0 or nums[i][j] == -1) return 0;
        if(nums[i][j] == 2) {
            return zero == -1 ? 1 : 0;
        }
        
        nums[i][j] = -1;
        zero--;
        int x = dfs(i+1,j,nums,zero) + dfs(i-1,j,nums,zero) + dfs(i,j+1,nums,zero) + dfs(i,j-1,nums,zero);
        nums[i][j] = 0;
        zero++;
        return x;
    }
    
    
};