class Solution {
public:
    vector<vector<vector<int>>> dp;
    int Count(string s) {
        int left = 0,right = s.length()-1;
        int cnt = 0;
        while(left < right) {
            if(s[left] != s[right]) cnt++;
            left++;
            right--;
        }
        
        return cnt;
    }
    int palindromePartition(string s, int k) {
        cout<<s.length()<<endl;
        dp.resize(s.length()+1,vector<vector<int>>(s.length()+1,vector<int>(k,-1)));
        return dfs(0,0,s,k-1);
    }
    
    int dfs(int index,int left,string &s,int k) {
        
        if(k == 0) {
            return Count(s.substr(left));
        }
        
        if(index == s.length()-1) return 1e9;
        
        if(dp[index][left][k] != -1) return dp[index][left][k];
        
        int take = INT_MAX,notTake = INT_MAX;
        //split
        string tmp = s.substr(left,index-left+1);

        int count = Count(tmp);
        take = count + dfs(index+1,index+1,s,k-1);
        
        //not split
        notTake = dfs(index+1,left,s,k);
        
        return dp[index][left][k] = min(take,notTake);
    }
};