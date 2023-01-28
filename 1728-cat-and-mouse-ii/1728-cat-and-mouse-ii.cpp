class Solution {
public:
    vector<int> grad = {0,1,0,-1,0};
    int catjump,mousejump;
    int dp[8][8][8][8][1001];
    bool dfs(int cx,int cy,int mx,int my,vector<string> &nums,int move) {        
        
        if(move > 500) return 0; // cat wins  
        
        if(dp[cx][cy][mx][my][move] != -1) return dp[cx][cy][mx][my][move];
        
        if(move%2 != 0) { // mouse move
            
             for(int k=0;k<4;k++) {
                for(int j=1;j<=mousejump;j++) {
                    int nx = mx + grad[k]*j;
                    int ny = my + grad[k+1]*j;
                    
                    if(nx<0 or nx>=nums.size() or ny<0 or ny>=nums[0].size())
                        continue;
                    if(nums[nx][ny] == '#') break;
                    if(nx == cx and ny == cy) continue;
                    
                    if(nums[nx][ny] == 'F') return dp[cx][cy][mx][my][move] = 1; // mouse got food
                    
                    if(dfs(cx,cy,nx,ny,nums,move+1)) return dp[cx][cy][mx][my][move] = 1; //mouse wins
                }
            }
            if(dfs(cx,cy,mx,my,nums,move+1)) return dp[cx][cy][mx][my][move] = 1; // mouse wins
            
            return dp[cx][cy][mx][my][move] = 0; // cat wins
            
        }else{ // cat move
            
             for(int k=0;k<4;k++) {
                for(int j=1;j<=catjump;j++) {
                    int nx = cx + grad[k]*j;
                    int ny = cy + grad[k+1]*j;
                    
                    if(nx<0 or nx>=nums.size() or ny<0 or ny>=nums[0].size())
                        continue;
                    if(nums[nx][ny] == '#') break;
                    
                    if(mx == nx and my == ny) return dp[cx][cy][mx][my][move] = 0; // cat wins
        
                    if(nums[nx][ny] == 'F') return dp[cx][cy][mx][my][move] = 0; // cat wins
                    
                    if(!dfs(nx,ny,mx,my,nums,move+1)) return dp[cx][cy][mx][my][move] = 0; //cat wins
                }
            }
            if(!dfs(cx,cy,mx,my,nums,move+1)) return dp[cx][cy][mx][my][move] = 0; // cat wins
            
            return dp[cx][cy][mx][my][move] = 1; // mouse wins            
            
        }
        
    }
    bool canMouseWin(vector<string>& nums, int catJump, int mouseJump) {
        int cx = 0,cy = 0,rx = 0,ry = 0;
        catjump = catJump;
        mousejump = mouseJump;
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<nums.size();i++) {
            for(int j=0;j<nums[i].size();j++) {
                if(nums[i][j] == 'C') {
                    cx = i; cy = j;
                }else if(nums[i][j] == 'M') {
                    rx = i; ry = j;
                }
            }
        }
        
        return dfs(cx,cy,rx,ry,nums,1);
    }
};

/*

".M..."
"..#.."
"#..#."
"C#.#."
"...#F"

*/