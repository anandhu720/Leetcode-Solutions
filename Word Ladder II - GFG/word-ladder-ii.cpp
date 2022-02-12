// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
public:
    void dfs(string& beginWord,string& endWord,unordered_map<string,unordered_set<string>>& adj,vector<string> &path,vector<vector<string>> &ans){
        path.push_back(beginWord);
        
        if(beginWord == endWord){
            ans.push_back(path);
            path.pop_back();
            return;
        }
        
        for(auto x : adj[beginWord])
            dfs(x,endWord,adj,path,ans);
            
        path.pop_back();
    }

    vector<vector<string>> findSequences(string beginWord, string endWord, vector<string>& wordList) {
        unordered_map<string,unordered_set<string>> adj;
        unordered_set<string> myset(wordList.begin(),wordList.end());
        
        queue<string> q;
        q.push(beginWord);
        
        unordered_map<string,int> visited; //<string,depth>
        visited[beginWord] = 0;
        while(!q.empty()){
            string curr = q.front(); q.pop();
            string temp = curr;
            for(int i=0;i<curr.size();++i){
                for(char c='a';c<='z';++c){
                    if(temp[i] == c) continue;
                    
                    temp[i] = c;
                    
                    if(myset.count(temp) > 0){
                        if(visited.count(temp) == 0){
                            visited[temp] = visited[curr] + 1;
                            q.push(temp);
                            adj[curr].insert(temp);
                        }else if(visited[temp] == 1+visited[curr]){
                            adj[curr].insert(temp);
                        }
                    }
                }
                temp[i] = curr[i];
            }
        }
        
        vector<string> path;
        vector<vector<string>> ans;
        dfs(beginWord,endWord,adj,path,ans);
        return ans;
        
    }
};

// { Driver Code Starts.

bool comp(vector<string> a, vector<string> b)
{
    string x = "", y = "";
    for(string i: a)
        x += i;
    for(string i: b)
        y += i;
    
    return x<y;
}

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<string>wordList(n);
		for(int i = 0; i < n; i++)cin >> wordList[i];
		string startWord, targetWord;
		cin >> startWord >> targetWord;
		Solution obj;
		vector<vector<string>> ans = obj.findSequences(startWord, targetWord, wordList);
		if(ans.size()==0)
		    cout<<-1<<endl;
		else
		{
		    sort(ans.begin(), ans.end(), comp);
            for(int i=0; i<ans.size(); i++)
            {
                for(int j=0; j<ans[i].size(); j++)
                {
                    cout<<ans[i][j]<<" ";
                }
                cout<<endl;
            }
		}
	}
	return 0;
}  // } Driver Code Ends