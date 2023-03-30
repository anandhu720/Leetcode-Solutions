class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set<int> row,col;
        
        for(int i=0;i<matrix.size();i++) {
            for(int j=0;j<matrix[0].size();j++) {
                if(matrix[i][j] == 0) {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        
        for(int i=0;i<matrix.size();i++) {
            for(int j=0;j<matrix[0].size();j++) {
                if(row.count(i) > 0 or col.count(j) > 0) 
                    matrix[i][j] = 0;
            }
        }
    }
};