class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0) return false;
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        int lo = 0;
        int ro = (m*n) - 1;
        
        while(lo <= ro) {
            int mid = (lo + (ro - lo)/2);
            if(matrix[mid/m][mid%m] == target) return true;
            else if(matrix[mid/m][mid%m] < target) lo = mid+1;
            else ro = mid-1;
        }
        
        return false;
    }
};