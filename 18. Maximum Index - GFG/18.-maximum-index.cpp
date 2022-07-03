// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
int maxIndexDiff(int A[], int N) 
   { 
       // Your code here
         int ar[N];
      for(int i=0;i<N;i++){
          ar[i]=i;
      }
      vector< pair<int,int> >v;
      for(int i=0;i<N;i++){
          v.push_back(make_pair(A[i],i));
      }
      
      sort(v.begin(), v.end());

      int ans[N];
      ans[N-1] = v[N-1].second;
      
      for(int i=N-2;i>=0;i--){
          ans[i] = max(ans[i+1],v[i].second);
      }
      int ma =0;
      for(int i=0;i<N;i++){
          ma = max(ma,ans[i]-v[i].second);
      }
      return ma;
   }
};

// { Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
}   // } Driver Code Ends