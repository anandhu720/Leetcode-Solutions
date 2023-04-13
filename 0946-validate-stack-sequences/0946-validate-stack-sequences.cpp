class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int j=0;
        
        for(int i=0;i<pushed.size();i++) {
            while(!st.empty() and j < popped.size() and st.top() == popped[j]) {
                st.pop();
                j++;
            }
            
            st.push(pushed[i]);
            
        }
        
        while(!st.empty() and j < popped.size() and st.top() == popped[j]) {
            st.pop();
            j++;
        }
        
        return j >= popped.size();
    }
};

// 1 2 3 4