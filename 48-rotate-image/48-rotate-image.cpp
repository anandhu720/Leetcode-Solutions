class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        
        //transpose
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[j][i],matrix[i][j]);
            }
        }
        
        //reverse rows
        for(int i=0;i<n;i++){
            int start = 0;
            int end = n-1;
            while(start<end){
                swap(matrix[i][start],matrix[i][end]);
                start++;
                end--;
            }
        }
        
    }
};