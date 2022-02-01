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


//brute force
// class Solution {
// public:
//     //backtracking
//     //time = O(2^n) space = O(n)
//     void helper(int index,int amount,vector<int> &coins,int &minCoins,int &currentCoins){
        
//         if(index >= coins.size() || amount < 0){
//             if(amount == 0)
//                 minCoins = min(minCoins,currentCoins);
//             return;
//         }
        
//         if(index < coins.size()){
//             currentCoins++;
//             helper(index,amount-coins[index],coins,minCoins,currentCoins);
//             currentCoins--;
//         }
//         helper(index+1,amount,coins,minCoins,currentCoins);
//     }
//     int coinChange(vector<int>& coins, int amount) {
//         int minCoins = INT_MAX;
//         int currentCoins = 0;
//         helper(0,amount,coins,minCoins,currentCoins);
//         if(minCoins == INT_MAX) return -1;
//         return minCoins;
//     }
// };