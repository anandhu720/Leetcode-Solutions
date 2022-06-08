class Solution {
private:
    bool isNumber(const string& str)
    {
        for (char const &c : str) {
            if (std::isdigit(c) == 0) return false;
        }
        return true;
    }
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        
        for(int i=0;i<tokens.size();i++) {
                
            if(tokens[i] == "+"){
                int right = st.top(); st.pop();
                int left = st.top(); st.pop();
                int val = left+right;
                st.push(val);
            }else if(tokens[i] == "-"){
                int right = st.top(); st.pop();
                int left = st.top(); st.pop();  
                int val = left - right;
                st.push(val);
            }else if(tokens[i] == "*"){
                int right = st.top(); st.pop();
                int left = st.top(); st.pop();  
                int val = left * right;
                st.push(val);
            }else if(tokens[i] == "/") {
                int right = st.top(); st.pop();
                int left = st.top(); st.pop();   
                int val = left / right;
                st.push(val);
            }else{
                st.push(stoi(tokens[i]));
            }
                
        }
        
        return st.top();
    }
};