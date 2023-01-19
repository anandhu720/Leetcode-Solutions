class Solution {
private:
    unordered_map<int,vector<pair<int,int>>> umap;
    int ans = 0;
    void dfs(int node,vector<int> &values,int maxTime,int currSum) {
        
        if(maxTime < 0) return;
        
        if(node == 0) ans = max(ans,currSum);
        
        currSum += values[node];
        int x = values[node];
        values[node] = 0;
        
        // cout<<node<<" "<<currSum<<endl;
        
        for(auto it : umap[node]) {
            dfs(it.first,values,maxTime-it.second,currSum);
        }
        
        values[node] = x;
    }
public:
    int maximalPathQuality(vector<int>& values, vector<vector<int>>& edges, int maxTime) {
        
        for(auto it : edges) {
            umap[it[0]].push_back({it[1],it[2]});
            umap[it[1]].push_back({it[0],it[2]});
        }
        
        dfs(0,values,maxTime,0);
        
        return ans == 0 ? values[0] : ans;
    }
};