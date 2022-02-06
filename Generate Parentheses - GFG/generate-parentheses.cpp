// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


 // } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    void backtrack(int openP,int closedP,int n,string &comb,vector<string> &result){
        
        if(openP == closedP && openP == n){
            result.push_back(comb);
            return;
        }
        
        if(openP < n){
            comb.push_back('(');
            backtrack(openP+1,closedP,n,comb,result);
            comb.pop_back();
        }
        
        if(closedP < openP){
            comb.push_back(')');
            backtrack(openP,closedP+1,n,comb,result);
            comb.pop_back();
        }
    }
    public:
    vector<string> AllParenthesis(int n) 
    {
        string comb;
        vector<string> result;
        
        backtrack(0,0,n,comb,result);
        return result;
    }
};

// { Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 
  // } Driver Code Ends