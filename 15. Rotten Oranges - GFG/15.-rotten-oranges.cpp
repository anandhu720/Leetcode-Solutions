// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};
   int orangesRotting(vector<vector<int>>& grid) {
       // Code here
       int n=grid.size();
       int m=grid[0].size();
       queue<pair<int,int>>q;
       vector<vector<int>>vis(n,vector<int>(m)),dist(n,vector<int>(m,INT_MAX));
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(grid[i][j]==2){
                   q.push({i,j});
                   dist[i][j]=0;
                   vis[i][j]=1;
               }
           }
       }
       //coming out for loop
       while(!q.empty()){
           pair<int,int>p=q.front();
           q.pop();
           for(int k=0;k<4;k++){
               int xx=p.first+dx[k];
               int yy=p.second+dy[k];
               if(xx>=0&&xx<n&&yy>=0&&yy<m&&grid[xx][yy]==1&&vis[xx][yy]==0){
                   q.push({xx,yy});
                   dist[xx][yy]=dist[p.first][p.second]+1;
                   vis[xx][yy]=1;
               }
           }
           
       }
       int res=0;
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                   res=max(res,dist[i][j]);
               }
              
           }
       }
       return res==INT_MAX?-1:res;
   }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends