class Solution {
public:
    pair<int,int> dp[41][41];
    int mctFromLeafValues(vector<int>& arr) {
        memset(dp,-1,sizeof(dp));
       return dfs(arr,0,arr.size()-1).second; 
    }
    
    pair<int,int> dfs(vector<int> &nums,int l,int r) {
        
        if(l>r) return {0,100000};
        
        if(l == r) return {nums[l],0};
        
        if(dp[l][r].first != -1) return dp[l][r];
        
        pair<int,int> ans = {0,100000};
        for(int i=l;i<r;i++) {
            auto left_p = dfs(nums,l,i);
            auto right_p = dfs(nums,i+1,r);
            
            int total = left_p.second+right_p.second+(left_p.first*right_p.first);
            if(total < ans.second) {
                ans.first = max(left_p.first,right_p.first);
                ans.second = total;
            }
        }
        
        return dp[l][r] = ans;
    }
};