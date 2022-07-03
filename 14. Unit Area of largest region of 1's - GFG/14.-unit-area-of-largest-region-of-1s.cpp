// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution

{

    private:

    bool isValid(int x , int y , vector<vector<int>>& grid , int n , int m){

        return ((x < n) && (y < m) && (x >= 0) && (y >= 0) && (grid[x][y]));

    }

    

    private:

    int countArea(int x , int y , vector<vector<int>>& grid , int n , int m){

        if(isValid(x , y , grid , n , m)){

            int dx[] = {-1 , 1 , 0 , 0 , -1 , 1 , 1 , -1};

            int dy[] = {0 , 0 , -1 , 1 , -1 , 1 , -1 , 1};

            

            grid[x][y] = 0;

            

            int sum = 0;

            

            for(int i = 0; i < 8; i++){

                sum += countArea(x + dx[i] , y + dy[i] , grid , n , m);

            }

            

            return 1 + sum;

        }

        

        return 0;

    }

    

    public:

    //Function to find unit area of the largest region of 1s.

    int findMaxArea(vector<vector<int>>& grid) {

        // Code here

        int maxArea = 0 , n = grid.size() , m = grid[0].size();

        

        for(int i = 0; i < n; i++){

            for(int j = 0; j < m; j++){

                if(grid[i][j]){

                    maxArea = max(countArea(i , j , grid , n , m) , maxArea);

                }

            }

        }

        

        return maxArea;

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
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends