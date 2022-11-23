//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  private:
    bool isPrime(int n) {
        if(n <= 1) return false;
        if(n == 2 or n == 3) return true;
        if(n%2 == 0 or n%3 == 0) return false;
        
        for(int i=5;i*i<=n;i+=6) {
            if(n%i == 0 or n%(i+2) == 0) return false;
        }
        return true;
    }
  public:
    int maxDigit(int L, int R)  {
        map<int,int> umap;
        for(int i=L;i<=R;i++) {
            if(isPrime(i)) {
                int x = i;
                while(x) {
                    umap[x%10]++;
                    x /= 10;
                }
            }
        }
        int x = INT_MIN;
        int num = -1;
        for(auto it : umap) {
            if(it.second >= x) {
                x = it.second;
                num = max(num,it.first);
            }
        }
        
        return num;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R;
        cin >> L >> R;
        Solution ob;
        cout<<ob.maxDigit(L,R)<<endl;
    }
    return 0;
}

// } Driver Code Ends