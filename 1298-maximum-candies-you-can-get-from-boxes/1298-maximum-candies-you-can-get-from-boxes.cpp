class Solution {
public:
    int maxCandies(vector<int>& status, vector<int>& candies, vector<vector<int>>& keys, vector<vector<int>>& containedBoxes, vector<int>& initialBoxes) {
        
        int ans = 0;
        vector<int> vis(status.size(),0); // 0 - not vis, 1 - take and vis, 2 - vis on take
        queue<int> q;
        
        for(auto it : initialBoxes) {
            if(status[it] == 1) {
                
                //check for keys
                for(auto i : keys[it]) {
                    status[i] = 1;
                    if(vis[i] == 2) {
                        q.push(i);
                        vis[i] = 1;
                        ans += candies[i];
                    }
                }

                q.push(it);
                ans += candies[it];
                vis[it] = 1;
            }
            if(vis[it] != 1) vis[it] = 2;
        }
        
        while(!q.empty()) {
            
            int box = q.front(); q.pop();
            
            // key find in box
            for(auto it : keys[box]) {
                status[it] = 1;
                if(vis[it] == 2) {
                    q.push(it);
                    vis[it] = 1;
                    ans += candies[it];
                }
            }
            
            
            //boxes find in box
            for(auto it : containedBoxes[box]) {
                if((vis[it] == 0 or vis[it] == 2) and status[it] == 1) {

                    q.push(it);
                    ans += candies[it];
                    vis[it] = 1;

                }
                if(vis[it] != 1) vis[it] = 2;
            }
            
        }
        
        return ans;
        
    }
};