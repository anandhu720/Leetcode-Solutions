// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
    bool isValid(int i, int j, int n, int m) {
        return i<n&&j<m&&i>=0&&j>=0;
    }
    vector<pair<int,int> > dir{{0,1},{1,0},{-1,0},{0,-1}};
    void dfs(int i, int j, int n, int m, vector<vector<char>>&grid, vector<vector<bool>>&vis) {
        vis[i][j]=1;
        for(int k=0; k<4; k++) {
            int x=i+dir[k].first, y=j+dir[k].second;
            if(isValid(x,y,n,m)&&grid[x][y]=='X'&&!vis[x][y]) dfs(x,y,n,m,grid,vis);
        }
    }
    public:
    int xShape(vector<vector<char>>& grid) {
        int n=grid.size(), m=grid[0].size();
        vector<vector<bool> > vis(n,vector<bool> (m,0));
        int count=0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j]=='X'&&!vis[i][j]) {
                    count++; 
                    dfs(i,j,n,m,grid,vis);
                }
            }
        }
        return count;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m, '#'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.xShape(grid);
		cout << ans <<'\n';
	}
	return 0;
}  // } Driver Code Ends