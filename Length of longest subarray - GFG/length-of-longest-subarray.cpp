// { Driver Code Starts
#include <iostream>
using namespace std;

long long int longestSubarry(long long int *arr, long long int n);

// Driver code
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << longestSubarry(arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


long long int longestSubarry(long long int A[], long long int N) {
    if(A[0] < 0) A[0] = 0;
    else A[0] = 1;
    long long int maxi = A[0];
    for(int i=1;i<N;i++){
        if(A[i] < 0) A[i] = 0;
        else A[i] = A[i-1]+1;
        
        maxi = max(A[i],maxi);
    }
    return maxi;
}