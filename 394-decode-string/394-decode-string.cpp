class Solution {
public:
    string repeat(string s, int n)
    {
        // Copying given string to temporary string.
        string s1 = s;
 
        for (int i=1; i<n;i++)
            s += s1; // Concatenating strings
 
        return s;
    }
    string decodeString(string s) {
        stack<string> st;
        string currString = "";
        int currNum = 0;
        
        for(int i=0;i<s.length();i++) {
            
            if(s[i] == '[') {
                st.push(currString);
                st.push(to_string(currNum));
                currNum = 0;
                currString = "";
            }else if(s[i] == ']') {
                int num = stoi(st.top()); st.pop();
                string prevString = st.top(); st.pop();
                currString = prevString + repeat(currString,num);
            }else if(s[i] >= '0' and s[i] <= '9') {
                currNum = currNum*10 + (s[i] - 48);
            }else{
                currString.push_back(s[i]);
            }
            
        }
        
        
        return currString;
    }
};