class Solution {
public:
    vector<int> grad = {0,1,0,-1,0};
    
    bool bfs(vector<int> &source,vector<int> &target,set<pair<int,int>> vis) {
        
        queue<pair<int,int>> q;
        q.push({source[0],source[1]});
        vis.insert({source[0],source[1]});
        int dist = 0;
        
        while(!q.empty()) {
            dist++;
            
            if(dist > 200) break;
            
            int size = q.size();
            for(int i=0;i<size;i++) {
                
                int r = q.front().first;
                int c = q.front().second;
                q.pop();
                
                for(int k=0;k<4;k++) {
                    int nr = r + grad[k];
                    int nc = c + grad[k+1];
                    
                    if(nr<0 or nr>=1e6 or nc<0 or nc>=1e6) continue;
                    if(vis.count({nr,nc}) > 0) continue;
                    
                    if(nr == target[0] and nc == target[1]) return true;
                    
                    vis.insert({nr,nc});
                    q.push({nr,nc});
                }
                
            }
        }
        
        return !q.empty();
        
    }
    bool isEscapePossible(vector<vector<int>>& blocked, vector<int>& source, vector<int>& target) {
        set<pair<int,int>> vis;
        for(auto it : blocked) {
            vis.insert({it[0],it[1]});
        }
        
        return bfs(source,target,vis) and bfs(target,source,vis);
    }
};