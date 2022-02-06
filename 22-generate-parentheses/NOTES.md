### Backtracking
​
```
//Time = (2^n)
class Solution {
public:
void backtrack(int openP,int closedP,int n,string &comb,vector<string> &result){
if(openP == closedP && openP == n){
result.push_back(comb);
return;
}
if(openP < n){
comb.push_back('(');
backtrack(openP+1,closedP,n,comb,result);
comb.pop_back();
}
if(closedP < openP){
comb.push_back(')');
backtrack(openP,closedP+1,n,comb,result);
comb.pop_back();
}
}
vector<string> generateParenthesis(int n) {
string comb;
vector<string> result;
backtrack(0,0,n,comb,result);
return result;
}
};
```