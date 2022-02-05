// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    string convert(string s, int n) {
        if(n == 1) return s;
          
        string res = "";  
        for(int r=0;r<n;r++){
            int increment = 2*(n-1);
            for(int i=r;i<s.length();i+=increment){
                res += s[i];
                if(r > 0 && r < n-1 && i+increment-2*r < s.length())
                    res += s[i+increment - 2*r];
            }
        }
        
        return res;
    }
};

// { Driver Code Starts.
// Driver program
int main()
{
    int t;
    cin>>t;
    while (t--){
        string str;
        cin>>str;
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.convert(str, n)<<endl;
    }
    return 0;
}  // } Driver Code Ends