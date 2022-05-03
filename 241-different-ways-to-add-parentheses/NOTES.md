Recursion
```
class Solution {
public:
vector<int> diffWaysToCompute(string expression) {
vector<int> answer;
for(int i=0;i<expression.length();i++) {
char c = expression[i];
if(expression[i] == '-' or expression[i] == '+' or expression[i] == '*') {
string left = expression.substr(0,i);
string right = expression.substr(i+1);
vector<int> al = diffWaysToCompute(left);
vector<int> bl = diffWaysToCompute(right);
for(int x : al) {
for(int y : bl) {
if(c == '-') {
answer.push_back(x-y);
}else if(c == '+') {
answer.push_back(x+y);