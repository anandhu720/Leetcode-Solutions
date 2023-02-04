class Solution {
public:
    vector<int> grad = {0,1,0,-1,0};
    bool dfs(int mid,vector<vector<int>> grid) {
        int n = grid.size(),m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        queue<pair<int,int>> fire;
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(grid[i][j] == 1) fire.push({i,j});
            }
        }
        
        // intial fire setup
        while(!fire.empty()) {  
            if(mid == 0) break;
            mid--;
            int size = fire.size();
            
            while(size--) {
                
                auto [r,c] = fire.front(); fire.pop();
                
                for(int k=0;k<4;k++) {
                    int nr = r + grad[k];
                    int nc = c + grad[k+1];
                    
                    if(nr<0 or nr>=n or nc<0 or nc>=m or grid[nr][nc] == 2 or grid[nr][nc] == 1)
                        continue;
                    
                    grid[nr][nc] = 1;
                    fire.push({nr,nc});
                }
                
            }
        }
        
        
        queue<pair<int,int>> man;
        man.push({0,0});
        vis[0][0] = 1;
        
        while(!man.empty()) { // man and fire starts moving together
            
            int level = 0;
            set<pair<int,int>> uset;
            while(!fire.empty()) {
                if(level == 1) break;
                level++;
                int size = fire.size();
                while(size--) {
                    auto [r,c] = fire.front(); fire.pop();
                    
                    for(int k=0;k<4;k++) {
                        int nr = r + grad[k];
                        int nc = c + grad[k+1];
                        
                        if(nr<0 or nr>=n or nc<0 or nc>=m or grid[nr][nc] == 2 or grid[nr][nc] == 1)
                            continue;
                        
                        grid[nr][nc] = 1;
                        uset.insert({nr,nc});
                        fire.push({nr,nc});
                    }
                }
                
            }
            
            int size = man.size();
            while(size--) {
                
                auto [r,c] = man.front(); man.pop();
                
                for(int k=0;k<4;k++) {
                    int nr = r + grad[k];
                    int nc = c + grad[k+1];
                    
                    if(nr<0 or nr>=n or nc<0 or nc>=m or grid[nr][nc] == 2)
                            continue;
                    
                    if(nr == n-1 and nc == m-1) {
                        if(grid[nr][nc] == 1 and uset.count({nr,nc}) > 0) return true;
                        if(grid[nr][nc] == 0) return true;
                    }
                    
                                  
                    if(vis[nr][nc] == 1 or grid[nr][nc] == 1) continue;
                    
                    
                    vis[nr][nc] = 1;
                    man.push({nr,nc});
                    
                }
                
            }
            
        }
        
        return false;
        
    }
    int maximumMinutes(vector<vector<int>>& grid) {
        int left = 0,right = 1e9;
        int res = -1;
        while(left <= right) {
            int mid = left + (right - left)/2;
            // cout<<mid<<endl;
            if(dfs(mid,grid)) {
                res = mid;
                left = mid + 1;
            }else{
                right = mid - 1;
            }
        }
        // if(res == 1000) res = 1e9;
        return res;
    }
};
