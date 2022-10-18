class Solution {
public:
    int grad[5] = {0,1,0,-1,0};
    int minimumEffortPath(vector<vector<int>>& nums) {
        int n = nums.size(),m = nums[0].size();
        
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> pq;
        vector<vector<int>> grid(n,vector<int>(m,INT_MAX));
        grid[0][0] = 0;
        pq.push({0,0,0});
        
        while(!pq.empty()) {
            auto tmp = pq.top(); pq.pop();
            
            int diff = tmp[0];
            int r = tmp[1]; int c = tmp[2];
            
            if(r == n-1 and c == m-1) return diff;
            
            for(int k=0;k<4;k++) {
                int nr = r + grad[k];
                int nc = c + grad[k+1];
                
                if(nr < 0 or nr >= n or nc < 0 or nc >= m) continue;
                
                int newEffort = max(abs(nums[r][c] - nums[nr][nc]),diff);
                if(newEffort < grid[nr][nc]) {
                    grid[nr][nc] = newEffort;
                    pq.push({newEffort,nr,nc});
                }
            }
        }
        
        return 0;
        
    }
};