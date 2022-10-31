class Solution {
private:
    unordered_map<int,vector<int>> umap;
    vector<int> color;
public:
    bool dfs(int node) {
        
        for(auto it : umap[node]) {
            if(color[it] == -1) {
                color[it] = 1 - color[node];
                if(!dfs(it)) return false;
            }else if(color[it] == color[node]){
                return false;
            }
        }
        
        return true;
    }
    bool possibleBipartition(int n, vector<vector<int>>& nums) {
        
        for(auto it : nums) {
            umap[it[0]].push_back(it[1]);
            umap[it[1]].push_back(it[0]);
        }
        
        color.resize(n+1,-1);
        
        for(int i=1;i<=n;i++) {
            if(color[i] != -1) continue;
            
            color[i] = 1;
            if(!dfs(i)) return false;
        }
        
        return true;
        
        
    }
};