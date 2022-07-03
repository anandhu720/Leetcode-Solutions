// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr, arr+n);
    	sort(dep, dep+n);
    	int i=0, j=0;
    	int mxp = INT_MIN;
    	int platform =0;
    	while(i<n && j<n){
    	 if(arr[i] <= dep[j]){
    	     platform++;
    	     i++;
    	 }   
    	 else if(arr[i] > dep[j]){
    	     platform--;
    	     j++;
    	 }
    	 
    	 if(platform > mxp)
    	  mxp = platform;
    	 
    	}
    	
    	return mxp;
    }
};


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends