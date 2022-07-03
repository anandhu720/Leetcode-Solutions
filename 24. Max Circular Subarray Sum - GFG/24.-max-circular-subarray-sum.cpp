// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
int circularSubarraySum(int A[], int n){
        
        // your code here
        int total = 0, maxSum = A[0], curMax = 0, minSum = A[0], curMin = 0;
        for (int i=0;i<n;i++) {
            curMax = max(curMax + A[i], A[i]);
            maxSum = max(maxSum, curMax);
            curMin = min(curMin + A[i], A[i]);
            minSum = min(minSum, curMin);
            total += A[i];
        }
        return maxSum > 0 ? max(maxSum, total - minSum) : maxSum;
    }
};

// { Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends