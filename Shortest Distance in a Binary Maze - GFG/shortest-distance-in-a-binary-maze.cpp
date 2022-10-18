//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int grad[5] = {0,1,0,-1,0};
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,pair<int, int> destination) {
        
        if(source.first == destination.first and source.second == destination.second)
            return 0;
        if(grid[source.first][source.second] == 0) return -1;
        
        queue<pair<int,int>> q;
        q.push(source);
        grid[source.first][source.second] = 0;
        int depth = 0;
        
        while(!q.empty()) {
            int size = q.size();
            
            for(int i=0;i<size;i++) {
                pair<int,int> x = q.front(); q.pop();
            
                for(int k=0;k<4;k++) {
                    int r = x.first+grad[k];
                    int c = x.second+grad[k+1];
                
                    if(r < 0 or r >= grid.size() or c < 0 or c >= grid[0].size() or grid[r][c] == 0) continue;
                    if(r == destination.first and c == destination.second) return depth+1;
                    grid[r][c] = 0;
                    q.push({r,c});
                
                }
            }
            depth++;
        }
        
        return -1;

    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends