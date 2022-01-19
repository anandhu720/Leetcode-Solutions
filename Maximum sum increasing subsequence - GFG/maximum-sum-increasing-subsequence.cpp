// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    vector<int> sums(n);
	    for(int i=0;i<n;i++) sums[i] = arr[i];
	    
	    int maxSumIndex = 0;
	    for(int i=0;i<n;i++){
	        int currNum = arr[i];
	        for(int j=0;j<i;j++){
	            int otherNum = arr[j];
	            if(otherNum < currNum && sums[j] + currNum >= sums[i]){
	                sums[i] = sums[j] + currNum;
	            }
	        }
	        
	        if(sums[i] >= sums[maxSumIndex]) maxSumIndex = i;
	    }
	    
	    return sums[maxSumIndex];
	}  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends