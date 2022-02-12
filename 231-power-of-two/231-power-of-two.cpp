class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n > 0){
            long double k = log2(n);
            if(k == int(k))
                return true;
        }
        return false;
    }
};