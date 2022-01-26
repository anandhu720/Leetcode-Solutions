// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         map<int,vector<int>> map;
         for(int i=0;i<mat.size();i++){
             for(int j=0;j<mat[i].size();j++){
                 map[i+j].push_back(mat[i][j]);
             }
         }
         
         bool downFromTop = true;
         vector<int> ans;
         for(auto p : map){
             vector<int> r = p.second;
             if(downFromTop) reverse(r.begin(),r.end());
             for(auto i : r) ans.push_back(i);
             downFromTop = !downFromTop;
         }
         
         return ans;
    }
};


// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
        vector<vector<int>>mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int>ans = obj.matrixDiagonally(mat);
        for(auto i: ans)cout << i << " ";
        cout << "\n";
        
       
    }
}  // } Driver Code Ends