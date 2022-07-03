// { Driver Code Starts
// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
         // Logic of this question : We have to fix two element at same index
         // We can do it with simple logic
         // Dividend = Quotient * Divisor + remainder
         
         // Byobservationn we can see that Max element will be atan  even positon inthe  array
         // and min element at odd index
         
         int minIdx = 0;
         int maxIdx = n-1;
         int maxi = arr[n-1] + 1;
         
         for(int i=0;i<n;i++){
// arr[i](new value) = (arr[min/maxIdx](New value) % maxi) * maxi + arr[i] (old value)
             if(i & 1){
                 arr[i] = (arr[minIdx] % maxi) * maxi + arr[i];
                 minIdx ++;
             }else{
                 arr[i] = (arr[maxIdx] % maxi) * maxi + arr[i];
                 maxIdx --;
             }
         }
         
         // Dividing by maxi to get new values
         
            for(int i=0;i<n;i++){
                arr[i] /= maxi;
            }
         
    }
};
// { Driver Code Starts.

// Driver program to test above function 
int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        
        //calling rearrange() function
        ob.rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 
  // } Driver Code Ends