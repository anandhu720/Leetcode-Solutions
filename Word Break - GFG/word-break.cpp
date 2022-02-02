// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:
    bool partition(string s,int pos,unordered_set<string> &myset,unordered_map<int,bool> &mem){
        if(pos==s.size())   return true;
        if(mem.count(pos))  return mem[pos];
        
        for(int i=pos;i<s.size();++i)
            if(myset.count(s.substr(pos,i-pos+1)) and partition(s,i+1,myset,mem))
                return mem[pos] = true;
        return mem[pos] = false;
    }
    int wordBreak(string s, vector<string> &wordDict) {
        //code here
        unordered_map<int,bool> mem;
        unordered_set<string> myset;
        for(auto str: wordDict)
            myset.insert(str);
        
        return partition(s,0,myset,mem);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}
  // } Driver Code Ends