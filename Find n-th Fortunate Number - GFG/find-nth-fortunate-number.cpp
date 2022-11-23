//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  private:
    vector<bool> sieve;
    void dfs() {
        for(int i=2;i<sieve.size();i++) {
            if(sieve[i]) {
                for(int j=i*i;j<=sieve.size();j+=i) {
                    sieve[j] = false;
                }
            }
        }
    }
    bool isPrime(long long x) {
        if(x <= 1) return false;
        if(x == 2 or x == 3) return true;
        if(x%2 == 0 or x%3 == 0) return false;
        
        for(long long i = 5;i*i <= x;i+=6) {
            if(x%i == 0) return false;
            if(x%(i+2) == 0) return false;
        }
        return true;
    }
  public:
    long long nthFortunateNum(int n) {
        sieve.resize(500,true);
        sieve[0] = sieve[1] = false;
        dfs();
        long long pro = 1;
        int cnt = n;
        for(int i=2;i<sieve.size();i++) {
            if(cnt == 0) break;
            if(sieve[i]) {
                pro *= i;
                cnt--;
            }
        }
        // cout<<pro<<endl;
        long long next = pro;
        int x = 2;
        while(!isPrime(next+x)) {
            x++;
        }
        
        // cout<<next+x;
        
        return (next+x) - pro;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.nthFortunateNum(n) << endl;
    }
    return 0;
}
// } Driver Code Ends