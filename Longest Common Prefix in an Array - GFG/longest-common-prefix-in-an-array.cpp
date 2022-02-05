// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string strs[], int N)
    {
        sort(strs,strs+N); //sort the vector
        if(N==0) return "";
        string first=strs[0]; //take first and last string from the vector as they will be the most different ones
        string last=strs[N-1];
        int c=0;
        while(c<first.size())
        {
            if(first[c]==last[c])
                c++;
            else
                break;
        }
        string ans=first.substr(0,c);
        return ans == "" ? "-1" : ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends