// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 


void printVector(const vector<int>& a) 
{ 
    for (auto e : a) { 
        cout << e << " "; 
    }
    cout<<endl;
} 

 // } Driver Code Ends

class Solution {
	public:       
        
        vector<int> merge(vector<int>& A, vector<int>& B) 
        {
        
            vector<int> v;
            
            int i = 0, j = 0, k = 0;
            while(j < A.size() && k < B.size()) {
                if(A[j] <= B[k]) {
                    v.push_back(A[j++]);
                } else {
                    v.push_back(B[k++]);
                }
            }
            
            while(j < A.size()) {
                v.push_back(A[j++]);
            }
            
            while(k < B.size()) {
                v.push_back(B[k++]);
            }
        
            return v;
        } 
    vector<int> mergeThree(vector<int>& A, vector<int>& B, vector<int>& C) 
    { 
        //Your code here
        vector<int> v;
        vector<int> ans;
        
        v = merge(A, B);
        ans = merge(v, C);
        
        return ans;
    } 

};
// { Driver Code Starts.

int main() 
{ 


    int t;
    cin>>t;
    while(t--){
    int n,m,o;
    cin>>n>>m>>o;
    vector<int> A,B,C;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        A.push_back(x);
    }
    
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        B.push_back(x);
    }
    
    for(int i=0;i<o;i++){
        int x;
        cin>>x;
        C.push_back(x);
    }

    Solution obj;
    vector<int>ans = obj.mergeThree(A, B, C);
    for(auto i: ans)cout << i << " ";
    cout << "\n";
    // obj.printVector(mergeThree(A, B, C)); 
    
    }
   
    return 0; 
} 
  // } Driver Code Ends