class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for(int i=0;i<s.size();i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
                char temp = s[i];
                if(st.empty())
                    return false;
                else if(')' == temp && st.top() == '(')
                    st.pop();
                else if(temp == '}' && st.top() == '{')
                    st.pop();
                else if(temp == ']' && st.top() == '[')
                    st.pop();
                else
                    return false;
            }
        }
        
        return st.empty()?true:false;
    }
};