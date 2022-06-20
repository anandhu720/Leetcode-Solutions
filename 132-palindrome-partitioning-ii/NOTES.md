minVal = min(minVal,temp);
}
dp[i][j] = minVal;
}
}
}
}
return dp[0][dp.size()-1];
}
};
```
​
Memo Code  Time = O(n^3)
```
class Solution {
private:
bool isPal(string s,int left,int right) {
while(left<right) {
if(s[left] != s[right]) return false;
left++;
right--;
}
return true;
}
public:
int minCut(string s) {
vector<int> dp(s.length(),-1);
// negative one because it cuts at the end of string always
// for eg : s = abc => a | b | c |
return dfs(0,s,dp) - 1;
}
int dfs(int index,string &s,vector<int> &dp) {
if(index == s.length()) return 0;
if(dp[index] != -1) return dp[index];