class Solution {
public:
    //Dynamic Programming - tabulation 
    // Number of Ways To make Changes Algoexpert similar
    int coinChange(vector<int>& denoms, int n) {
    	vector<int> dp(n+1,n+1);
	    dp[0] = 0;
	    for(auto denom : denoms){
		    for(int i=0;i<n+1;i++){
			    if(denom <= i){
				    dp[i] = min(dp[i],1+dp[i-denom]);
			    }
		    }
	    }
        return dp[n] > n?-1:dp[n];
    }
};


