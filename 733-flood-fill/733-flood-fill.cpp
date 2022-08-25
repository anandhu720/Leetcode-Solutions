class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& nums, int sr, int sc, int color) {
        
        queue<pair<int,int>> q;
        unordered_map<int,unordered_map<int,bool>> umap;
        q.push({sr,sc});
        umap[sr][sc] = true;
        int prev = nums[sr][sc];

        nums[sr][sc] = color;
        vector<int> grad = {0,1,0,-1,0};
        
        while(!q.empty()) {
            auto x = q.front(); q.pop();
            
            for(int i=0;i<4;i++) {
                int row = x.first+grad[i]; int col = x.second+grad[i+1];
                if(row < 0 or 
                   col < 0 or 
                   row >= nums.size() or
                   col >= nums[0].size() or
                   nums[row][col] != prev or
                   (umap.find(row) != umap.end() and umap[row].find(col) != umap[row].end())
                  )
                continue;
                
                q.push({row,col});
                umap[row][col] = true;
                nums[row][col] = color;
                
                
            }
        }
        
        return nums;
    }
};