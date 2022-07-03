// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
 bool find3Numbers(int A[], int n, int X)
   {
       //Your Code Here
       sort(A,A+n);
       int sum=0;
       sum=A[n-1]+A[n-2]+A[n-3];
       if(sum==X)
         return true;
      
      
      if(sum>X)
      {
           for(int i=0;i<n-2;i++)
       {
         if(A[i]<X)
         {
              for(int j=i+1;j<n-1;j++)
          {
              sum=0;
              sum=A[i]+A[j]+A[j+1];
              
             if(sum<=X)
             {
                  for(int k=j+1;k<n;k++)
              {
                  sum=0;
                  sum=A[i]+A[j]+A[k];
                  if(sum==X)
                    return true;
              }
             }
          }
         }
         
       }
      }
   return 0;
   }

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends