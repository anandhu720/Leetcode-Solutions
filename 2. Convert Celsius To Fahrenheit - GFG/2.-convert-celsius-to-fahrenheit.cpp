// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    
double cToF(int C)

{

   int frh;

   frh = ((C*1.8)+32);

   return frh;

}

};

// { Driver Code Starts.







int main()
{
    int T;//number of testcases
    int C,F;
    cin >> T; //input number of testcases
    while(T--){
        cin >> C;//input temperature in celscius
        Solution ob;
        cout << floor(ob.cToF(C)) << endl; //print the output
    }
    return 0;
}  // } Driver Code Ends