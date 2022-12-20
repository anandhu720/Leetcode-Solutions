class Solution {
public:
    void dfs(int node,vector<bool> &vis,vector<vector<int>> &rooms) {
        vis[node] = true;
        
        for(auto it : rooms[node]) {
            if(vis[it] == false) {
                dfs(it,vis,rooms);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> vis(rooms.size(),false);
        
        dfs(0,vis,rooms);
        
        for(auto it : vis) 
            if(it == false) return false;
        return true;
    }
};