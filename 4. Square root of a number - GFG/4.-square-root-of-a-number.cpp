// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

 // } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
long floorSqrt(long x)
	 {
		// Your code here
		long high = x, low = 0;
		long mid = 0;
		do
		{
		    mid = low + ((high - low)/2);
		    if(mid*mid>x){
		        high = mid;
		        low = low;
		    }
		    else{
		        low = mid;
		        high = high;
		    }
		}while(!((mid * mid <= x) && ((mid+1)*(mid+1))>=x));
		if((mid+1)*(mid+1) == x)
		    return mid+1;
		else
		    return (mid); 
	 }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}
  // } Driver Code Ends