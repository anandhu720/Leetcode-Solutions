// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// Alphabet size (# of upper-Case characters)
#define ALPHABET_SIZE 26


 // } Driver Code Ends
//User function template for C++

// dict : given set of strings
// pattern : given pattern
class Solution
{
   public:
   //Function to print all words in the CamelCase dictionary 
   //that matches with a given pattern.
   struct TrieNode {
       TrieNode* children[26];
       bool isLeaf;
   };
   pair<bool, string> insertt(TrieNode* root, string s, string p) {
       string r = "";
       bool ans = false, f = false;
       for(auto c: s) {
           if((int)'A' <= (int)c && (int)c <= (int)'Z') {
               r += c;
               if(!f) {
                   if(r == p) {
                       ans = true;
                       f = true;
                   }
               }
               int index = c - 'A';
               if(!root->children[index]) {
                   root->children[index] = new TrieNode();
               }
               root = root->children[index];
           }
       }
       root->isLeaf = true;
       return {ans, r};
   }
   void findAllWords(vector<string> dict, string pattern) 
   {
       //code here
       map<string, vector<string>> m;
       TrieNode* root = new TrieNode();
       vector<string> r;
       for(auto s: dict) {
           pair<bool, string> ans = insertt(root, s, pattern);
           if(ans.first) {
               r.push_back(s);
               m[ans.second].push_back(s);
           }
       }
       if(!m.size()) {
           cout<<"No match found";
       } else {
           for(auto i: m) {
               sort(i.second.begin(), i.second.end());
               for(auto j: i.second)
                   cout<<j<<" ";
           }  
       }
   }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--) {
	int now;
	cin>>now;
	vector<string> dict(now) ;
	for(int i=0;i<now;i++)
	    cin>>dict[i];

	string pattern;
	cin>>pattern;
	Solution obj;
	obj.findAllWords(dict, pattern);
	    cout<<endl;
}
	return 0;
}
  // } Driver Code Ends