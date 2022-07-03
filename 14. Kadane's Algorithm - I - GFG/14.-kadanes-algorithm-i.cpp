// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to print the maximum contiguous subarray sum ending at each 
    //position in the array and return the overall maximum.
long long maximumSum(int arr[], int sizeOfArray)
    {
       int n = sizeOfArray;
       #define ll long long
       ll dp[n] = {0};
       dp[0] = arr[0];
       for(int i = 1; i< n; i++){
           dp[i] = max((ll)arr[i], (ll)dp[i-1]+arr[i]);
       }
       for(int i = 0;i < n; i++){
           cout << dp[i] << " ";
       }
       cout << endl;
       return *max_element(dp, dp + n);
 }
};

// { Driver Code Starts.
int main() {
    
    //taking total testcases
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    //taking size of array
	    int sizeOfArray;
	    cin>>sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    //inserting elements to the array
	    for(int i=0;i<sizeOfArray;i++)
	    cin>>arr[i];
	    Solution ob;
	    //calling function maximumSum()
	    cout<<ob.maximumSum(arr,sizeOfArray)<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends