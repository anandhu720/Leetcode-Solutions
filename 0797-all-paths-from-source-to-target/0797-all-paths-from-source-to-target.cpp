class Solution {
public:
    vector<vector<int>> ans;
    void dfs(int node,vector<int> &tmp,vector<vector<int>> &adj) {
        
        tmp.push_back(node);
        
        if(node == adj.size()-1) {
            ans.push_back(tmp);
            tmp.pop_back();
            return;
        }
        
        for(auto it : adj[node])
            dfs(it,tmp,adj);
        
        tmp.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int> tmp;
        dfs(0,tmp,graph);
        return ans;
    }
};