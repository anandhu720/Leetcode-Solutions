class Solution {
public:
    int longestPath(vector<int>& parent, string s) {
        unordered_map<int,vector<int>> umap;
        for(int i=0;i<parent.size();i++) {
            if(parent[i] == -1) continue;
            umap[parent[i]].push_back(i);
        }
        
        int res = 0;
        dfs(0,s,res,umap);
        return res;
    }
    
    int dfs(int node,string &s,int &res,unordered_map<int,vector<int>> &umap) {
        int big1 = 0,big2 = 0;
        
        for(auto it : umap[node]) {
            int curr = dfs(it,s,res,umap);
            if(s[it] == s[node]) continue;
            if(curr > big2) big2 = curr;
            if(big1 < big2) swap(big1,big2);
        }
        
        res = max(res,big1+big2+1);
        return big1+1;
    }
};

