// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
int longestUniqueSubsttr(string S){
       //code
       vector<int> map(256,-1);
       int length = 0;
       int right = 0;
       int left = 0;
       int n = S.size();
       
       while(right < n){
           if(map[S[right]] != -1){
               left= max(map[S[right]]+1,left);
           }
           
           map[S[right]] = right;
           length = max(length,right-left+1);
           right++;
       }
       return length;
   }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}  // } Driver Code Ends