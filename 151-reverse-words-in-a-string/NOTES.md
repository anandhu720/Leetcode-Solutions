```
class Solution {
public:
string reverseWords(string s) {
stack<string> st;
string temp = "";
for(int i=0;i<s.length();i++) {
if(s[i] == ' ') {
if(temp.size() > 0) st.push(temp);
temp = "";
continue;
}
temp.push_back(s[i]);
}
if(temp.size() > 0) st.push(temp);
temp = "";
while(!st.empty()) {
temp += st.top(); st.pop();
temp.push_back(' ');
}
temp.pop_back();
return temp;
}
};
```