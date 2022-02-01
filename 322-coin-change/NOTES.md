### Brute force
```
class Solution {
public:
//backtracking
//time = O(2^n) space = O(n)
void helper(int index,int amount,vector<int> &coins,int &minCoins,int &currentCoins){
if(index >= coins.size() || amount < 0){
if(amount == 0)
minCoins = min(minCoins,currentCoins);
return;
}
if(index < coins.size()){
currentCoins++;
helper(index,amount-coins[index],coins,minCoins,currentCoins);
currentCoins--;
}
helper(index+1,amount,coins,minCoins,currentCoins);
}
int coinChange(vector<int>& coins, int amount) {
int minCoins = INT_MAX;
int currentCoins = 0;
helper(0,amount,coins,minCoins,currentCoins);
if(minCoins == INT_MAX) return -1;
return minCoins;
}
};
```