// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution
{
    public:
    //Function to find most frequent word in an array of strings.
string mostFrequentWord(string arr[], int n) 
   {
       int freq = 1;
       unordered_map<string, pair<int,int> >mp;
       for(int i=0;i<n; i++){
           if(mp.find(arr[i]) == mp.end()){
               mp[arr[i]] = {i,1};
           }
           else{
               auto f = mp[arr[i]];
               mp[arr[i]] = {f.first, f.second+1};
               freq = max(freq,f.second+1);
           }
       }
       int flo = -1;
       string ans = "";
       for(auto x:mp){
           if(x.second.second == freq){
               if(flo < x.second.first){
                   ans = x.first;
                   flo = x.second.first;
               }
           }
       }
       return ans;
   }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.mostFrequentWord(arr, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends