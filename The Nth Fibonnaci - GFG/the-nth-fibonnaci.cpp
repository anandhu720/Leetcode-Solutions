// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int fib(int N){
        //code here
       if(N==1){
           return 1;
       }
       int a=0,b=1,c=0;
       int count=2;
       while(count<=N){
           c=(a+b)%10;
           a=b;
           b=c;
           count++;
       }
       return c%10;
        
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.fib(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends