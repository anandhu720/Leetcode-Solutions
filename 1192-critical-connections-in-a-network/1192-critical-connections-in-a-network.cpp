class Solution {
public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        disc = vector<int>(n,-1);
        low = vector<int>(n,-1);
        for (auto conn : connections) {
            edgeMap[conn[0]].push_back(conn[1]);
            edgeMap[conn[1]].push_back(conn[0]);
        }
        dfs(0, -1);
        return ans;
    }
    void dfs(int curr, int prev) {
        
        disc[curr] = low[curr] = time++;
        int child = 0;
        
        for (int next : edgeMap[curr]) {
            if (disc[next] == -1) {
                child++;
                dfs(next, curr);
                low[curr] = min(low[curr], low[next]);
                
                if (low[next] > disc[curr]) 
                    ans.push_back({curr, next});
                
            } else if (next != prev)
                low[curr] = min(low[curr], disc[next]);
            

        }
    }
private:
    vector<int> disc{0}, low{0};
    int time = 1;
    vector<vector<int>> ans;
    unordered_map<int, vector<int>> edgeMap;
};