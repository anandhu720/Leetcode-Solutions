class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        unordered_map<int,set<int>> umap;
        
        for(int i=0;i<matrix.size();i++) {
            for(int j=0;j<matrix[0].size();j++) {
                umap[i-j].insert(matrix[i][j]);
            }
        }
        
        for(auto it : umap) {
            if(it.second.size() > 1) return false;
        }
        
        return true;
    }
};