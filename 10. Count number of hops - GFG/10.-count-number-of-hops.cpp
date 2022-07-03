// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
long long countWays(int n)
    {
        
        long long first=1;
        long long second=2;
        long long m=1000000007;
        long long thrid=4;
        if(n==1 || n==2)
        return n;
        if(n==3)
        return 4;
        long long sum;
        for(int i=4;i<=n;i++){
            sum=first%m+second%m+thrid%m;
            first=second%m;
            second=thrid%m;
            thrid=sum%m;
        }
        return sum%m;
        
    }
};


// { Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}
  // } Driver Code Ends