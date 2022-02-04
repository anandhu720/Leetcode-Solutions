class Solution {
public:
    /*
    * Time = O(n*n*n) Space = O(n)
    */
    int maxCoins(vector<int>& nums) {
        int n = nums.size()+2;
        
        //adding 1 in last and first of given array
        int arr[n];
        for(int i=1;i<n-1;i++) arr[i] = nums[i-1];
        arr[0] = arr[n-1] = 1;
        
        vector<vector<int>> dp(n,vector<int>(n,0));
        
        for(int len=0;len<n-1;len++){ //sliding window
           for(int start=1;start<n-len;start++){
               int end = start+len-1; //ending and starting point of sliding window
               for(int k=start;k<=end;k++){ //taking one by obe element in sliding window
                   dp[start][end] = max(dp[start][end],dp[start][k-1]+arr[k]*arr[start-                                                   1]*arr[end+1]+dp[k+1][end]);
               }
           } 
        }
       return dp[1][n-2]; 
    }
};