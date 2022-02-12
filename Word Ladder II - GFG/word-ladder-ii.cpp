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
        unordered_map<string, unordered_set<string>> adj;   //Adjacency List
        unordered_set<string> dict(wordList.begin(),wordList.end());   //Insert WordList in SET
        
        //STEP-1: Find min-depth using BFS
        queue<string> Q;    //For BFS traversal
        Q.push(beginWord);  //Push start node (beginWord)
        unordered_map<string, int> visited; //Key->String (Node)...Value->Level (Depth of traversal)
        visited[beginWord] = 0; //Start node will always be at level 0
        while(!Q.empty())
        {
            string curr = Q.front();
            Q.pop();
            string temp = curr;
            for(int i = 0; i < curr.size(); ++i)    //For all characters
            {
                for(char x = 'a'; x <= 'z'; ++x)    //Try all possible 26 letters
                {
                    if(temp[i] == x)    //Skip if letter is same as in original word
                        continue;

                    temp[i] = x;    
                    if(dict.count(temp) > 0)    //Check if new word is present in wordList
                    {
                        if(visited.count(temp) == 0)    //check if the new word was already visited
                        {
                            visited[temp] = visited[curr] + 1;
                            Q.push(temp);
                            adj[curr].insert(temp);
                        } 
                        else if(visited[temp] == visited[curr] + 1) //If already visited and new word is the child (We should always move down)
                            adj[curr].insert(temp);
                    }
                }
                temp[i] = curr[i];  //Revert back temp to curr
            }
        }
        //STEP-2: Find all possible paths at min-depth using DFS
        vector<string> path;
        vector<vector<string>> ans;
        dfs(beginWord, endWord, adj, path,ans); //Find all possible paths with min-depth
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