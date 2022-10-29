class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> maxRow(grid.size(),INT_MIN);
        vector<int> maxCol(grid[0].size(),INT_MIN);
        
        for(int i=0;i<grid.size();i++) {
            for(int j=0;j<grid[0].size();j++) {
                maxRow[i] = max(maxRow[i],grid[i][j]);
                maxCol[j] = max(maxCol[j],grid[i][j]);
            }
        }
        
        int cnt = 0;
        for(int i=0;i<grid.size();i++) {
            for(int j=0;j<grid[0].size();j++) {
                cnt += abs(grid[i][j] - min(maxRow[i],maxCol[j]));
            }
        }
        
        return cnt;
    }
};