// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
	
	public:
	vector<int> downwardDigonal(int n, vector<vector<int>> mat)
	{
		 map<int,vector<int>> map;
         for(int i=0;i<mat.size();i++){
             for(int j=0;j<mat[i].size();j++){
                 map[i+j].push_back(mat[i][j]);
             }
         }
         
         vector<int> ans;
         for(auto p : map){
             vector<int> r = p.second;
             for(auto i : r) ans.push_back(i);
         }
         
         return ans;
	}

};

// { Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDigonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}
  // } Driver Code Ends