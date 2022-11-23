//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
private:
    vector<bool> sieve;
    void pre() {
        for(long long i=2;i<sieve.size();i++) {
            if(sieve[i]) {
                for(long long j=i*i;j<sieve.size();j+=i) {
                    sieve[j] = false;
                }
            }
        }
    }
public:
    string isSumOfTwo(int N){
        sieve.resize(N+1,true);
        sieve[0] = sieve[1] = false;
        pre();
        int left = 2, right = N+1;
        while(sieve[right] == false) right--;
        while(left <= right) {
            if(left+right == N) return "Yes";
            else if(left+right > N) {
                right--;
                while(left < right and sieve[right] == false) right--; 
            }else{
                left++;
                while(left < right and sieve[left] == false) left++;
            }
        }
        return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends