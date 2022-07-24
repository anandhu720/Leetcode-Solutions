class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int res = 0;
        int n = grid.size();
        map<vector<int>,int> umap;
        
        for(int row=0;row<n;row++) umap[grid[row]]++;
        
        for(int col=0;col<n;col++) {
            
            vector<int> temp;
            
            for(int row=0;row<n;row++) {
                temp.push_back(grid[row][col]);
            }
            
            if(umap.find(temp) != umap.end())
                res += umap[temp];
        }
        
        return res;
    }
};