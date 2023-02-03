class Solution {
public:
    vector<int> maxPoints(vector<vector<int>>& grid, vector<int>& queries) {
        vector<pair<int,int>> tmp;
        for(auto it : queries) {
            tmp.push_back({it,0});
        }
        
        
        sort(tmp.begin(),tmp.end());

        
        vector<vector<int>> vis(grid.size(),vector<int>(grid[0].size(),0));
        
        priority_queue<pair<int,pair<int,int>>, vector< pair<int,pair<int,int>> >,greater<> > pq;
        pq.push({grid[0][0],{0,0}});
        
        vis[0][0] = 1;
        
        int i = 0;
        
        vector<int> grad = {0,1,0,-1,0};
        while(!pq.empty()) {
            int val = pq.top().first;
            int r = pq.top().second.first;
            int c = pq.top().second.second;
            
            pq.pop();
            
            bool flag = false;
            while(val >= tmp[i].first) { //change it
                i++;
                if(i == tmp.size()) {
                    flag = true;
                    break;
                }
                tmp[i].second += tmp[i-1].second;
            }
            
            if(flag) break;
            
            tmp[i].second += 1;
            
            
            for(int k=0;k<4;k++) {
                int nr = r + grad[k];
                int nc = c + grad[k+1];
                
                if(nr<0 or nr>=grid.size() or nc<0 or nc>=grid[0].size())
                    continue;
                
                if(vis[nr][nc] == 1) continue;
                
                vis[nr][nc] = 1;
                pq.push({grid[nr][nc],{nr,nc}});
            }
        }
        
        while(i < tmp.size()-1) {
            tmp[i+1].second = tmp[i].second;
            i++;
        }
        
        unordered_map<int,int> umap;
        for(auto it : tmp) {
            umap[it.first] = it.second;
        }
        
        vector<int> ans;
        for(auto it : queries) {
            ans.push_back(umap[it]);
        }
        
        return ans;
        
    }
};