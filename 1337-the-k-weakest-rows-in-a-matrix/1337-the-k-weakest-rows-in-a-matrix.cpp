class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> ans;
        
        set<pair<int,int>> umap;
        for(int i=0;i<mat.size();i++) {
            int count = 0;
            for(int j=0;j<mat[i].size();j++) {
                if(mat[i][j] == 1) count++;
            }
            umap.insert({count,i});
        }
        
        for(auto it : umap) {
            if(k == 0) break;
            ans.push_back(it.second);
            k--;
        }
        
        return ans;
        
    }
};