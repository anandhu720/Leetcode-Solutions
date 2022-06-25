// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        if(N == 0) return {};
        string digits = "";
        for(int i=0;i<N;i++) digits += to_string(a[i]);
        vector<string> letterComb = {"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> result;
        dfs(result,digits,"",0,letterComb);
        return result;
    }
    
    void dfs(vector<string> &result,string &digits,string comb,int index,vector<string> &letterComb){
        
        if(index == digits.length()){
            result.push_back(comb);
            return;
        }
        
        string letter = letterComb[(int)digits[index] - 48];
        
        for(int i=0;i<letter.length();i++){
            dfs(result,digits,comb+letter[i],index+1,letterComb);
        }
    }
};


// { Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}  // } Driver Code Ends