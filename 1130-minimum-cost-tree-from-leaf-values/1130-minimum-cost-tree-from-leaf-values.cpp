class Solution {
public:
    // stack
    int mctFromLeafValues(vector<int>& arr) {
        vector<int> st = {INT_MAX};
        
        int res = 0;
        
        for(int a : arr) {
            while(st.back() <= a) {
                int mid = st.back();
                st.pop_back();
                res += mid * min(a,st.back());
            }
            st.push_back(a);
        }
        
        for(int i=2;i<st.size();i++) {
            res += st[i-1] * st[i];
        }
        
        return res;
        
    }
};