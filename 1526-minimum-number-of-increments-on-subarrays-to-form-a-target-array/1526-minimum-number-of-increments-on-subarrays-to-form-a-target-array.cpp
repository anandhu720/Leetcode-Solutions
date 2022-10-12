class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        stack<int> st;
        int res = 0;
        
        for(auto i : target) {
            if(!st.empty() and i < st.top()) {
                res += st.top() - i;
                while(!st.empty() and i < st.top()) {
                    st.pop();
                }
            }
            
            st.push(i);
        }
        
        vector<int> ans;
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        
        res += ans[0] - ans[ans.size()-1];
        res += ans[ans.size()-1];
        
        return res;
    }
};