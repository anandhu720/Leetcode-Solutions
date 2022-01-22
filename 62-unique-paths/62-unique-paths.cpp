class Solution {
public:
    int uniquePaths(int m, int n) {
        int N = m+n-2;
        //for optimization
        int r;
        if(m<n) r = m-1;
        else r = n-1;
        double res = 1;
        
        //combination
        for(int i=1;i<=r;i++)
            res = res*(N-r+i)/i;
        
        return (int)res;
    }
};