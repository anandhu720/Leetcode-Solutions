// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    //Complete this function
    void dfs(int index,string &s,set<string> &set){
        
        if(index == s.length()){
            set.insert(s);
            return;
        }
        
        for(int i=index;i<s.length();i++){
            swap(s[i],s[index]); //do
            dfs(index+1,s,set); //recur
            swap(s[i],s[index]); //undo
        }
    }
    
    vector<string> permutation(string s)
    {
        //Your code here
        set<string> set;
        dfs(0,s,set);
        
        vector<string> ans;
        for(auto i : set) ans.push_back(i);
        
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
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}  // } Driver Code Ends