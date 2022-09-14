class Solution {
public:
    int minOperations(int n) {
        int mid = 0;
        n = n-1;
        if(n%2 != 0) {
            n = n/2;
            mid = (n*2) + 2;
        }else{
            n = n/2;
            mid = (n*2) + 1;
        }
        
        int ans = 0;
        for(int i=0;i<=n;i++) {
            int currVal = (i*2)+1;
            ans += (mid-currVal);
        }
        
        return ans;
    }
};