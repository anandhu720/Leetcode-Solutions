//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int dfs(int mid,int k,vector<int> &stalls) {
        int cnt = 1;
        int prev = stalls[0];
        for(int i=1;i<stalls.size();i++) {
            if(stalls[i] - prev >= mid) {
                cnt++;
                prev = stalls[i];
            }
        }
        
        return cnt >= k;
    }

    int solve(int n, int k, vector<int> &stalls) {
    
        int left = 0,right = 1e9;
        sort(stalls.begin(),stalls.end());
        int res = 0;
        while(left <= right) {
            int mid = left + (right - left)/2;
            if(dfs(mid,k,stalls)) {
                res = mid;
                left = mid + 1;
            }else{
                right = mid - 1;
            }
        }
        
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends