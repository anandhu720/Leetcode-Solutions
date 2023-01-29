class Solution {
public:
    int mod = 1e9 + 7;
    int power(long long x, long long n)
    {
        long long result = 1;
        while (n > 0) {
            if (n & 1 == 1) // y is odd
            {
                result = (result * x)%mod;
            }
            x = (x * x)%mod;
            n = n >> 1; // y=y/2;
        }
        return result;
    }
    int monkeyMove(int n) {
        long long ans = power(2,(long long)n);
        return (ans - 2) < 0 ? mod+ans-2 : ans-2;
    }
};