//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<pair<int,int>> grad = {{1,2},{-1,2},{1,-2},{-1,-2},{2,1},{-2,1},{2,-1},{-2,-1}};
	int minStepToReachTarget(vector<int>&KnightPos, vector<int>&TargetPos, int N){
	    queue<pair<int,int>> q;
	    q.push({KnightPos[0],KnightPos[1]});
	    
	    vector<vector<int>> vis(N+1,vector<int>(N+1,0));
	    vis[KnightPos[0]][KnightPos[1]] = 1;
	    
	    if(KnightPos[0] == TargetPos[0] and KnightPos[1] == TargetPos[1])
	        return 0;
	    
	    int len = 0;
	    while(!q.empty()) {
            int size = q.size();
            len++;
            while(size--) {
                auto x = q.front(); q.pop();
                
                int r = x.first;
                int c = x.second;
    	        
    	        for(auto it : grad) {
    	            int nr = r + it.first;
    	            int nc = c + it.second;
    	            
    	            if(nr<1 or nr>N or nc<1 or nc>N) continue;
    	            if(vis[nr][nc] == 1) continue;
    	            
    	            if(nr == TargetPos[0] and nc == TargetPos[1]) return len;
    	            
    	            vis[nr][nc] = 1;
    	            
    	            q.push({nr,nc});
    	        }
            }
	    }
	    
	    return -1;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends