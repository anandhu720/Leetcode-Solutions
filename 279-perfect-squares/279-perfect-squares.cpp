class Solution {
public:
    int numSquares(int n) {
            vector<int> d(n+1,100000);
    d[0]=0;
    for(int i=1;i*i<=n;i++)
        for(int j=1;j<=n;j++)
            if(j-i*i>=0)
                d[j] = min( 1 + d[j-i*i], d[j]);
    return d[n];
    }
};