class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1) return true;
        
        long left = 2;
        long right = num / 2;
        
        while (left <= right) {
            long mid = (right + left) / 2;
            long tmp = mid * mid;
            
            if (tmp == num) {
                return true;
            } else if (tmp > num) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        
        return false; 
    }
};