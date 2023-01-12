class Solution {
private:
    unordered_map<int,vector<int>> umap;
    vector<int> ans;
    vector<int> dfs(int node,string &labels,vector<int> &vis) {
        vector<int> nums(26,0);
        
        vis[node] = 1;
        
        for(auto it : umap[node]) {
            if(vis[it] == 0) {
                vector<int> tmp = dfs(it,labels,vis);
                for(int i=0;i<26;i++) nums[i] += tmp[i];
            }
        }
        
        nums[labels[node] - 'a']+=1;
        ans[node] = nums[labels[node] - 'a'];
        
        return nums;
        
    }
public:
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        for(auto it : edges) {
            umap[it[0]].push_back(it[1]);
            umap[it[1]].push_back(it[0]);
        }
        
        ans.resize(n,0);
        vector<int> vis(n,0);
        dfs(0,labels,vis);
        return ans;
    }
};