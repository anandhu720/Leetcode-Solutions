class Solution {
public:
    int m = 1e9 + 7;
    int countVowelPermutation(int n) {
        unordered_map<char,vector<char>> umap;
        
        umap['{'] = {'a','e','i','o','u'};
        umap['a'] = {'e'};
        umap['e'] = {'a','i'};
        umap['i'] = {'a','e','o','u'};
        umap['o'] = {'i','u'};
        umap['u'] = {'a'};
        char prev = '{';
        vector<vector<int>> dp(n+1,vector<int>(27,-1));
        return dfs(n,umap,prev,dp);
    }
    
    int dfs(int n,unordered_map<char,vector<char>> &umap,char prev,vector<vector<int>> &dp) {
        
        if(n == 0) return 1;
        
        if(dp[n][prev - 'a'] != -1) return dp[n][prev - 'a'];
        
        long long ans = 0;
            
        vector<char> s = umap[prev];
        
        for(auto it : s) ans += dfs(n-1,umap,it,dp)%m;

        return dp[n][prev - 'a'] = ans%m;
    }
};