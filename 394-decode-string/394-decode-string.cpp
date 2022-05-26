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
        stack<char> st;
        
        for(int i=0;i<s.length();i++) {
            
            if(s[i] != ']') st.push(s[i]);
            else{
                
                string temp = "";
                while(!st.empty() and st.top() != '[') {
                    temp.push_back(st.top());
                    st.pop();
                }
                
                reverse(temp.begin(),temp.end());
                
                st.pop();
                
                string x = "";
                while(!st.empty() and st.top() >= '0' and st.top() <= '9'){
                    x.push_back(st.top());
                    st.pop();
                }
                
                reverse(x.begin(),x.end());
                
                int num = stoi(x);
                
                string ans = repeat(temp,num);
                
                for(auto it : ans) st.push(it);
                
                
            }
            
        }
        
        string ans = "";
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
        
    }
};