class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int> rows(grid.size(),0);
        vector<int> cols(grid.size(),0);
        
        for(int i=0;i<grid.size();i++) {
            for(int j=0;j<grid.size();j++) {
                rows[i] = max(rows[i],grid[i][j]);
                cols[j] = max(cols[j],grid[i][j]);
            }
        }
        
        int sum = 0;
        for(int i=0;i<grid.size();i++) {
            for(int j=0;j<grid.size();j++) {
                int change = min(rows[i],cols[j]);
                if(grid[i][j] >= change) continue;
                else sum += (change-grid[i][j]);
            }
        }
        
        return sum;
    }
};