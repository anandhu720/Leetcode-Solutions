class Solution {
public:
    static bool comp(vector<int> &a,vector<int> &b) {
        if(a[0] == b[0]) {
            return a[1] > b[1];
        }
        return a[0] < b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& p) {
        
        sort(p.begin(),p.end(),comp);
        
        stack<int> st;
        int ans = 0;
        
        for(auto it : p) {
            while(!st.empty() and it[1] > st.top()) {
                ans++;
                st.pop();
            }
            
            st.push(it[1]);
        }
        
        return ans;
    }
};