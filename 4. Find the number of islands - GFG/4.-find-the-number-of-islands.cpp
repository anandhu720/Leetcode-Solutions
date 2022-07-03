// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
  public:
   void dfs(int i, int j, vector<vector<char>>& grid,int n, int m) {
       
       if (i >= n || i < 0 || j >= m || j < 0 || grid[i][j] != '1')
           return;
           
       int x[8] = {1, 1, 1, -1, -1, -1, 0, 0};
       int y[8] = {1, -1, 0, 1, -1, 0, 1, -1};
       grid[i][j] = '2';
       for (int k = 0; k < 8; k++) {
           int u = i + x[k];
           int v = j + y[k];
               dfs(u, v, grid,n,m);
       }
   }
   int numIslands(vector<vector<char>>& grid) {
       // Code here
       int n = grid.size();
       int m = grid[0].size();
   
       int ans = 0;
       for (int i = 0; i < n; i++) {
           for (int j = 0; j < m; j++) {
               if (grid[i][j] == '1') {
                   ans++;
                   dfs(i, j, grid,n,m);
               }
           }
       }
       return ans;
   }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends