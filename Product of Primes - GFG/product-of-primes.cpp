//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
private:
    bool isPrime(long long n) {
        if(n <= 1) return false;
        if(n == 2 or n == 3) return true;
        if(n%2 == 0 or n%3 == 0) return false;
        
        for(long long i=5;i*i <= n;i+=6) {
            if(n%i == 0 or n%(i+2) == 0) return false;
        }
        return true;
    }
public:
    long long mod = 1e9 + 7;
    long long primeProduct(long long L, long long R){
        long long p = 1;
        for(long long i=L;i<=R;i++) {
            if(isPrime(i)) {
                p = (p%mod * i %mod)%mod;
            }
        }
        
        return p;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long L, R;
        cin>>L>>R;
        
        Solution ob;
        cout<<ob.primeProduct(L, R)<<"\n";
    }
    return 0;
}
// } Driver Code Ends