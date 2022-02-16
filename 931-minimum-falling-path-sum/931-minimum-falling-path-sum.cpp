class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        for(int i=matrix.size()-2;i>=0;i--){
            for(int j=0;j<matrix[i].size();j++){
                if(j == 0){
                    matrix[i][j] += min(matrix[i+1][j],matrix[i+1][j+1]);
                }else if(j == matrix[i].size()-1){
                    matrix[i][j] += min(matrix[i+1][j],matrix[i+1][j-1]);
                }else{
                    matrix[i][j] += min(matrix[i+1][j],min(matrix[i+1][j+1],matrix[i+1][j-1]));
                }
            }
        }
        
        int mini = INT_MAX;
        for(int i=0;i<matrix[0].size();i++)
            mini = min(mini,matrix[0][i]);
        return mini;
    }
};