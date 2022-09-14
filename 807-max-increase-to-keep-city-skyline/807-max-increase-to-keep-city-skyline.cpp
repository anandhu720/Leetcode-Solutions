class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> rowMax(grid.size(),0);
        vector<int> colMax(grid.size(),0);
        
        for(int i=0;i<grid.size();i++) {
            for(int j=0;j<grid.size();j++) {
                rowMax[i] = max(rowMax[i],grid[i][j]);
                colMax[j] = max(colMax[j],grid[i][j]);
            }
        }
        
        long long ans = 0;
        for(int i=0;i<grid.size();i++) {
            for(int j=0;j<grid.size();j++) {
                int val = min(rowMax[i],colMax[j]);
                if(grid[i][j] < val) {
                    ans += (val - grid[i][j]);
                }
            }
        }
        
        return ans;
        
    }
};