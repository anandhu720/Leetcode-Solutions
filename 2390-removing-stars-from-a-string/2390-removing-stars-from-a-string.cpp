class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        
        for(auto it : s) {
            if(it == '*' and !st.empty()) {
                st.pop();
            }else{
                st.push(it);
            }
        }
        
        string ans = "";
        while(!st.empty())  {
            ans.push_back(st.top());
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
            
    }
};