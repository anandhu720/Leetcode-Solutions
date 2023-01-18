class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for(int i=0;i<s.size();i++) {
            
            st.push(s[i]);
            
            if(st.size() >= 3) {
                string tmp;
                int k = 3;
                while(k--) {
                    tmp.push_back(st.top());
                    st.pop();
                }
                
                if(tmp == "cba") continue;
                for(int i=2;i>=0;i--) st.push(tmp[i]);
            }
            
        }
        
        return st.size() == 0;
    }
};

/*


*/