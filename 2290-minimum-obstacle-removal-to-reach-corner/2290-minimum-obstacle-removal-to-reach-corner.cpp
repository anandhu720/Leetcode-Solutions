class Solution {
public:
    vector<int> grad = {0,1,0,-1,0};
    int minimumObstacles(vector<vector<int>>& grid) {
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<>> pq;
        pq.push({0,{0,0}}); // no,r,c
        vector<vector<int>> dis(grid.size(),vector<int>(grid[0].size(),1e9));

        dis[0][0] = 0;

        while(!pq.empty()) {
            int val = pq.top().first; int r = pq.top().second.first; int c = pq.top().second.second;
            pq.pop();
            



            for(int k=0;k<4;k++) {
                int nr = r + grad[k];
                int nc = c + grad[k+1];

                if(nr < 0 or nr >= grid.size() or nc < 0 or nc >= grid[0].size())
                    continue;
                
                // if(nr == grid.size()-1 and nc == grid[0].size()-1)
                //     return val;

                if(val + grid[nr][nc] < dis[nr][nc]) {
                    dis[nr][nc] = val+grid[nr][nc];
                    pq.push({val+grid[nr][nc],{nr,nc}});
                }
                
                
            }
        }

        return dis[grid.size()-1][grid[0].size()-1];
    }
};